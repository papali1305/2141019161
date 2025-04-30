#!/bin/bash

# File: login_attempts.sh

LOG_FILE="/var/log/auth.log"
OUTPUT_FILE="login_report.txt"

# Clear previous output
> $OUTPUT_FILE

echo "Listing all failed login attempts..." >> $OUTPUT_FILE

# Step 1: Use grep to find all failed login attempts
grep "Failed password" "$LOG_FILE" > temp_failures.txt

# Step 2: Use awk to extract the username and IP address
echo -e "\n[FAILED LOGIN ATTEMPTS]" >> $OUTPUT_FILE
awk '{for(i=1;i<=NF;i++) if($i=="for") print "User: " $(i+1) ", IP: " $(i+3)}' temp_failures.txt >> $OUTPUT_FILE

# Step 3: Use sed to extract error messages (example: connection closed, incorrect password)
echo -e "\n[ERROR MESSAGES]" >> $OUTPUT_FILE
sed -n '/Failed password/p' "$LOG_FILE" | sed -E 's/.*Failed password (.*)/\1/' >> $OUTPUT_FILE

# Clean up temporary files
rm temp_failures.txt

echo "Report saved to $OUTPUT_FILE"
