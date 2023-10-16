#include <stdio.h>
 int len(){
	char n[100];
	int length = 0;
	printf("Enter name : ");
	scanf("%s",n);
	
	while(n[length]!='\0'){
		length++;
	}

	return length;
}
int main(){

	
int z =	len();
printf("Your length is : %d",z);
	return 0;
}
