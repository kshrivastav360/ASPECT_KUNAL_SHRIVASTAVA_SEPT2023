#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        // Perform division if the second number is not zero
        float result = num1 / num2;
        printf("Result of division: %.2f\n", result);
    } else {
        printf("Division not possible. The second number cannot be zero.\n");
    }

    return 0;
}

