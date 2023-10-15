#include <stdio.h>
int main(){
	char str[10];
	int i;
	printf("Enter your name :\n");
	fgets(str,10,stdin);
	
	printf("Your name is : %s",str);
	printf("\n");
	return 0;
	
}
