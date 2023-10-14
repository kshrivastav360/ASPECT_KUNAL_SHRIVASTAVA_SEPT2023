#include <stdio.h>

int main() {
    int p, q, r, s;

    // Input values
    printf("Enter four integers (p q r s): ");
    scanf("%d %d %d %d", &p, &q, &r, &s);

    // Check conditions
    if (r > 0 && s > 0 && p % 2 == 0 && q > r && s > p && (r + s) > (p + q)) {
        printf("Correct values\n");
    } else {
        printf("Wrong values\n");
    }

    return 0;
}

