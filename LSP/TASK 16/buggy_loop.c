#include <stdio.h>

int main() {
    int i = 0;
    printf("Counting from 1 to 5:\n");

    while (i < 5) {
        printf("i = %d\n", i);
        i++;  // ✅ Fix: increment i
    }

    return 0;
}

