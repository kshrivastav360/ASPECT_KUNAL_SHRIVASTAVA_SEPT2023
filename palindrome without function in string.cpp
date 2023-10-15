#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int length,k=1;
	
	printf("Enter the string :");
	scanf("%s",s);
	
	length=strlen(s);
	
	for(int i=0;i<length/2;i++){
		if(s[i]!=s[length-i-1]){
			k=0;
			break;
		}
	}
	if (k){
		printf("%s is a palindrome\n",s);
	}
	else{
		printf("%s is not a palindrome\n",s);
	}
	return 0;
}
