#include <stdio.h>

int main() {
    int amount;
    
    // Input amount
    printf("Enter the amount (integer value): ");
    scanf("%d", &amount);

    printf("Breakdown of banknotes:\n");

    if (amount >= 100) {
        printf("%d x 100 notes\n", amount / 100);
        amount %= 100;
    }

    if (amount >= 50) {
        printf("%d x 50 notes\n", amount / 50);
        amount %= 50;
    }

    if (amount >= 20) {
        printf("%d x 20 notes\n", amount / 20);
        amount %= 20;
    }

    if (amount >= 10) {
        printf("%d x 10 notes\n", amount / 10);
        amount %= 10;
    }

    if (amount >= 5) {
        printf("%d x 5 notes\n", amount / 5);
        amount %= 5;
    }

    if (amount >= 2) {
        printf("%d x 2 notes\n", amount / 2);
        amount %= 2;
    }

    if (amount >= 1) {
        printf("%d x 1 notes\n", amount);
    }

    return 0;
}

