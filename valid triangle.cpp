#include <stdio.h>

int main() {
    float a, b, c;

   
    printf("Enter the three side lengths (separated by spaces): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        
        float perimeter = a + b + c;
        printf("It is possible to form a triangle.\n");
        printf("Perimeter of the triangle: %.2f\n", perimeter);
    } else {
        printf("It is not possible to form a triangle with these side lengths.\n");
    }

    return 0;
}

