#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i % 17 != 0) {
            sum += i;
        }
    }

    printf("Sum of numbers not divisible by 17 between %d and %d is: %d\n", start, end, sum);

    return 0;
}

