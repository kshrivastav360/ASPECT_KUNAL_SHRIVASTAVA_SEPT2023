#include <stdio.h>
void len(){
	char n[100];
	int length = 0;
	printf("Enter name : ");
	scanf("%d",&n);
	
	while(n[length]!='\0'){
		length++;
	}
	printf("%d",length);
	return ;
}
int main(){
	len();
	return 0;
}
