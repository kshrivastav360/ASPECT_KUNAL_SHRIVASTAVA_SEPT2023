#include <stdio.h>
int fact(int x){
	
	printf("Enter the value of n :");
	scanf("%d",&x);
	int facto=1;
	for(int i=2;i<=x;i++){
	 facto=facto*i;
	}
	
	return facto;
	
}
int main(){
	int y;
	int result=fact(y);
	printf("The factorial is : %d",result);
	return 0;
}
