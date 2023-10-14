#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("enter the value of a :");
    scanf("%d", &a);
    printf("enter the value of b :");
    scanf("%d", &b);
    printf("enter the value of c :");
    scanf("%d", &c);
    printf("enter the value of d :");
    scanf("%d", &d);

    if (a > b) {
        if (a > c)
            if (a > d)
                printf("%d is greatest ", a);
            else
                printf("%d is greatest ", d);
    }
    else if (b > c) {
        if (b > d)
            printf("%d is greatest ", b);
        else
            printf("%d is greatest ", d);
    }
    else if (c > d) {
        printf("%d is greatest ", c);
    }
    else {
        printf("%d is greatest ", d);
    }

    return 0;
}

