#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <errno.h>

#define __NR_reverse_string 451  // Replace with your syscall number if different
#define MAX_LEN 256

int main() {
    char *input = malloc(MAX_LEN);
    char *output = malloc(MAX_LEN);

    if (input == NULL || output == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: ");
    if (fgets(input, MAX_LEN, stdin) == NULL) {
        perror("fgets failed");
        free(input);
        free(output);
        return 1;
    }

    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline

    long result = syscall(__NR_reverse_string, input, output);

    if (result == 0) {
        printf("Reversed string: %s\n", output);
    } else {
        perror("System call failed");
        printf("Error code: %ld\n", result);
    }

    free(input);
    free(output);
    return 0;
}
