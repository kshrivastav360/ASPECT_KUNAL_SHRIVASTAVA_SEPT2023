#include <stdio.h>

int main() {
    int n;

    // Input number of lines
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    int count = 1;

    for (int i = 0; i < n; i++) {
        // Print three numbers in a line
        for (int j = 0; j < 3; j++) {
            if (count <= n * 3) {
                printf("%d ", count);
                count++;
            }
        }
        printf("\n");
    }

    return 0;
}

