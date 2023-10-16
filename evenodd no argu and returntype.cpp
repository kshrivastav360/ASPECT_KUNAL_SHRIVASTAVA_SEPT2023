#include <stdio.h>

int evenOdd() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int result = evenOdd();

    if (result == 1) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}

