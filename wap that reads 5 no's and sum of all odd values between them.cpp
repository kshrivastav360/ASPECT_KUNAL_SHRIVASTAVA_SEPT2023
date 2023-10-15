#include <stdio.h>

int main() {
    int n, sum = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);

        if (n % 2 != 0) {
            sum += n;
        }
    }

    printf("Sum of odd numbers: %d\n", sum);

    return 0;
}

