#include <stdio.h>

int main() {
    char ch;
    int i, j;

    for(i = 0; i < 4; i++) {
        ch = 'E';
        for(j = 0; j < 5; j++) {
            printf("%c  ", ch - j);
        }
        printf("\n");
    }

    return 0;
}

