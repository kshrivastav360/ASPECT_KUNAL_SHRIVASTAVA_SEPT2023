#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 1; i <= 4; i++) {
        char ch = 64 + i;  // ASCII value of 'A' is 65

        if (i % 2 != 0) {
            for(j = 1; j <= 5; j++) {
                printf("%c ", ch);
            }
        } else {
            for(j = 1; j <= i; j++) {
                printf("  ");
            }
            for(k = 1; k <= 5; k++) {
                printf("%c ", ch);
            }
        }

        printf("\n");
    }

    return 0;
}

