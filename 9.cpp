#include <stdio.h>

int main() {
    int p, q;

    // Read the values of p and q
    printf("Enter the values of p and q: ");
    scanf("%d %d", &p, &q);

    // Iterate over p lines
    for (int i = 1; i <= p; i++) {
        // Iterate over numbers from 1 to q
        for (int j = 1; j <= q; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

