#include <stdio.h>

int main(){
    char s[12] = "kunal ";
    char s1[14] = "kunal ";
    int i = 0;

    while (s[i] != '\0' && s1[i] != '\0' && s[i] == s1[i]) {
        i++;
    }

    if (s[i] == s1[i]) {
        printf("The strings are equal.\n");
    } else if (s[i] < s1[i]) {
        printf("s comes before s1.\n");
    } else {
        printf("s1 comes before s.\n");
    }

    return 0;
}


