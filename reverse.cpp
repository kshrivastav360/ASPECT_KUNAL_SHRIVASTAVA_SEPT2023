#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    int size = 0;
    int k = 0;
    int j;

    puts("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[k]!='\0') {
        size++;
        k++;
    }

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("Your reverse order is:");
    puts(str);
    return 0;
}

