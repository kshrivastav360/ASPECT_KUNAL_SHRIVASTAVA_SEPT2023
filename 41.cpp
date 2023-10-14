#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 4; i++) {
        if (i == 1) {
            printf("    ");
        }
        for(j = 1; j <= 5; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}



