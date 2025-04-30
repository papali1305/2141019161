#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>

#define __NR_reverse_string 448

int main() {
    char input[256], output[256];
    
    printf("Enter a string: ");
    scanf("%s", input);

    long ret = syscall(__NR_reverse_string, input, output);
    if (ret == 0) {
        printf("Reversed string: %s\n", output);
    } else {
        perror("System call failed");
    }

    return 0;
}
