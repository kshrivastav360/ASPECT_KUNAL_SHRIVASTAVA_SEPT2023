#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("The numbers are in ascending order.\n");
    } else if (num1 > num2) {
        printf("The numbers are in descending order.\n");
    } else {
        printf("The numbers are equal.\n");
    }

    return 0;
}

