#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++) {
        int num = arr[i];
        int fact = 1;

        for (int j = 1; j <= num; j++) {
            fact *= j;
        }

        printf("Factorial of %d is: %d\n", num, fact);
    }

    return 0;
}

