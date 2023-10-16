#include<stdio.h>
int palin(int n){
   int c,r,s=0;
   printf("Enter the value of n : ");
   scanf("%d",&n);
   c=n;
   while(n>0){
   	r=n%10;
   	s=(s*10)+r;
   	n=n/10;
   }
   if(c==s){
   	return 1;
   }
   else{
   	return 0;
   }	
}
int main(){
	int y;
	int z = palin(y);
	if (z==1){
		printf("palindrome no");
	}
	else{
		printf("not a palindrome");
	}
	  return 0;
}
