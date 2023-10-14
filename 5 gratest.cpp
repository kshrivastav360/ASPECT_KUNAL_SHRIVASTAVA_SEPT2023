#include <stdio.h>

int main (){
    int a, b, c, d, e;
    printf("Enter first number a: ");
    scanf("%d", &a);
    printf("Enter second number b: ");
    scanf("%d", &b);
    printf("Enter third number c: ");0.
    scanf("%d", &c);
    printf("Enter fourth number d: ");
    scanf("%d", &d);
    printf("Enter fifth number e: ");
    scanf("%d", &e);

    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    printf("a is the greatest: %d", a);
                } else {
                    printf("e is the greatest: %d", e);
                }
            } else {
                printf("d is the greatest: %d", d);
            }
        } else {
            printf("c is the greatest: %d", c);
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    printf("b is the greatest: %d", b);
                } else {
                    printf("e is the greatest: %d", e);
                }
            } else {
                printf("d is the greatest: %d", d);
            }
        } else {
            if (c > d) {
                if (c > e) {
                    printf("c is the greatest: %d", c);
                } else {
                    printf("e is the greatest: %d", e);
                }
            } else {
                if (d > e) {
                    printf("d is the greatest: %d", d);
                } else {
                    printf("e is the greatest: %d", e);
                }
            }
        }
    }

    return 0;
}

