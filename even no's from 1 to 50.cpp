#include <stdio.h>

int main() {
    printf("Even numbers from 1 to 50:\n");
    for (int i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

