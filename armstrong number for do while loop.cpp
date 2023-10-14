#include <stdio.h>

int main() {
    int n, c, r, arm = 0;
    printf("Enter the value :");
    scanf("%d", &n);
    c = n;

    do {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    } while (n > 0);

    if (c == arm) {
        printf("Armstrong number ");
    } else {
        printf("Not Armstrong number ");
    }

    return 0;
}

