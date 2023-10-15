#include <stdio.h>
#include <string.h>
int main(){
	int s;
	char name[5],origin[5];
	printf("Enter the string :");
	scanf("%s",name);
	
	 strcpy(origin,name);
	 strrev(name);
	s=strcmp(name,origin);
	if(s==0){
		printf("palindrome no");
	}
	else {
		printf("Not");
	}
	return 0;
}
