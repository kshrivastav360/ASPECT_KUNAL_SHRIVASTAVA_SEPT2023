#include <stdio.h>
void palin(){
	int n,c,r,s=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	c=n;
	
	while(n>0){
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(c==s){
		printf("palindrome no");
	}
	else{
		printf("not a palindrome ");
	}
	return ;
}
int main(){
	palin();
	return 0;
}
