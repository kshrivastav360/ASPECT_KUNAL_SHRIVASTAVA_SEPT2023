#include <stdio.h>

int main() {
    int n;

    
    printf("Enter a value (n): ");
    scanf("%d", &n);

    printf("Squares of even values from 1 to %d:\n", n);

    for (int i = 2; i <= n; i += 2) {
        int square = i * i;
        printf("%d^2 = %d\n", i, square);
    }

    return 0;
}

