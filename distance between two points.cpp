#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    // Input coordinates of the first point
    printf("Enter x and y coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Input coordinates of the second point
    printf("Enter x and y coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print distance
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}

