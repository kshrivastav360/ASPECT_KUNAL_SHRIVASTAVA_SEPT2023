#include <stdio.h>
void len(char n[100]){
	
	int length = 0;
	printf("Enter name : ");
	scanf("%s",n);
	
	while(n[length]!='\0'){
		length++;
	}
	printf("Your length is : %d",length);
	return ;
}
int main(){
	char s[100];
	len(s);
	return 0;
}
