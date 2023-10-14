#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        // Calculate roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        // Print roots
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else {
        printf("The roots are complex. Cannot find real roots.\n");
    }

    return 0;
}

