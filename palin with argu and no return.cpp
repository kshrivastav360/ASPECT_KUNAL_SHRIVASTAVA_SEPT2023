#include <stdio.h>
void palin(int n){
	int c,r,s=0;
	printf("Enter the value of n :");
	scanf("%d",&n);
	c=n;
	while(n>0){
	r=n%10;
	s=(s*10)+r;
	n=n/10;	
	}
	if(c==s){
		printf("Paalindrome no");
	
} 
else{
	printf("Not a palindrome no");
}
return ;
}

int main(){
	int s;
	palin(s);
	return 0;
}
