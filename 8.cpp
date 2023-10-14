#include <stdio.h>

int main() {
    int n, i, square, cube;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++) {
        square = i * i;
        cube = i * i * i;
        printf("%d %d %d\n", i, square, cube);
    }

    return 0;
}

