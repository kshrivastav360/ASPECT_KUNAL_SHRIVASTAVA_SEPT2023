#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 3; i++) {
        char upperChar = 'A' + i;
        char lowerChar = 'a' + i;

        printf("%c  ", upperChar);
        for(j = 0; j < 4; j++) {
            printf("%c  ", lowerChar);
        }

        printf("\n");
    }

    return 0;
}

