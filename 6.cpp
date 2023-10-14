#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the start number: ");
    scanf("%d", &start);

    printf("Enter the end number: ");
    scanf("%d", &end);

    printf("Numbers between %d and %d that give remainder 2 or 3 when divided by 7 are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (i % 7 == 2 || i % 7 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}

