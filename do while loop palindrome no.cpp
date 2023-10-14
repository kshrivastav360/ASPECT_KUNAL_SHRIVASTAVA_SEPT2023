#include <stdio.h>
int main(){
	int n,c,r,s=0;
	printf("Enter the value :");
	scanf("%d",&n);
	c=n;
	do {
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	while (n>0);
	if (c == s){
		printf("palindrome no");
	}
	else ("not");
	return 0;
}
