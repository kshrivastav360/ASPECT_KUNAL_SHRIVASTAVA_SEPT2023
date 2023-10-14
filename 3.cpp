#include <stdio.h>

int main() {
    int x, y;

    // Input coordinates
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The point (%d, %d) is in Quadrant 1.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) is in Quadrant 2.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) is in Quadrant 3.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) is in Quadrant 4.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point (%d, %d) is at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    }

    return 0;
}

