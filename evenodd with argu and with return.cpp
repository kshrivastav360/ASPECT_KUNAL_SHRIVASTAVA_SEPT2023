#include <stdio.h>

int evenodd(int n) {
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int y;
    int z = evenodd(y);
    if (z == 1) {
        printf("Even no");
    } else {
        printf("Odd no");
    }
    return 0;
}

