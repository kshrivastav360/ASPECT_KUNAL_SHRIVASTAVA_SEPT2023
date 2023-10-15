#include <stdio.h>

int main() {
    char src[] = "Hello, world!";
    char dest[20]; 

    int i;
    for (i = 0; i < 5 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < 5; i++) {
        dest[i] = '\0';
    }
    dest[i] = '\0';

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

