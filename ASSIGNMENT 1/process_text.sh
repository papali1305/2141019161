#!/bin/bash

# File: process_text.sh

echo "Step 1: Searching for 'Developer' using grep"
grep "Developer" data.txt

echo -e "\nStep 2: Replacing 'Intern' with 'Trainee' using sed"
sed 's/Intern/Trainee/' data.txt > updated_data.txt
cat updated_data.txt

echo -e "\nStep 3: Displaying formatted output using awk"
awk -F',' '{ printf "Name: %-10s | Age: %-3s | Role: %-10s\n", $1, $2, $3 }' updated_data.txt

