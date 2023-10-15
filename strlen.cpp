#include <stdio.h>

int main(){
    char str[10]="KUNAL";
    int i;         
    for(i = 0; str[i]; i++);
    
    
    printf("The length of your character is: %d", i);
    
    return 0; 
}


