#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is the maximum
    max = num1;

    // Check if num2 is greater
    if (num2 > max) {
        max = num2;
    }

    // Check if num3 is greater
    if (num3 > max) {
        max = num3;
    }

    // Print the maximum
    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}

