#include <stdio.h>

int main() {
    char s1[20] = "Hello, ";
    char s2[] = "world!";

    int i = 0;
    while (s1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    printf("%s\n", s1);

    return 0;
}

