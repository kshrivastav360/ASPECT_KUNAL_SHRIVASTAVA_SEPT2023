#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate factorial of digits and sum them up
    while (num > 0) {
        digit = num % 10;
        fact = 1;

        // Calculate factorial of digit
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}

