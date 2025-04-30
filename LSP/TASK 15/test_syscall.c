#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <linux/kernel.h>

#define __NR_reverse_string 333  // Should match your system call number

int main() {
    char input[256], output[256];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline
    
    long ret = syscall(__NR_reverse_string, input, output);
    if (ret < 0) {
        perror("System call failed");
        return EXIT_FAILURE;
    }
    
    printf("Reversed string: %s\n", output);
    return EXIT_SUCCESS;
}
