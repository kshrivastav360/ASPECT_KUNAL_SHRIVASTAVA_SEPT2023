#include <stdio.h>

int main() {
    int n;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

   
    if (n >= 0 && n <= 80) {
        printf("The number %d belongs to the specified range.\n", n);
    } else {
        printf("Error: The number must be between 0 and 80 (inclusive).\n");
    }

    return 0;
}

