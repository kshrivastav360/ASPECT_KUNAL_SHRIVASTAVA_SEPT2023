#include <stdio.h>

int main() {
    int n1, n2;

    
    printf("Enter the first integer: ");
    scanf("%d", &n1);

    printf("Enter the second integer: ");
    scanf("%d", &n2);

    
    int product = n1 * n2;

    if (product != 0) {
        printf("%d and %d are multiplied. The product is %d\n", n1, n2, product);
    } else {
        printf("%d and %d are not multiplied. The product is 0\n", n1, n2);
    }

    return 0;
}

