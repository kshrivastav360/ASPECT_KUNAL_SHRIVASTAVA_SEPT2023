#include <stdio.h>
void fact(){
	int x;
	printf("Enter the value of n :");
	scanf("%d",&x);
	int facto=1;
	for(int i=2;i<=x;i++){
	 facto=facto*i;
	}
	printf("The factorial is : %d",facto);
	return ;
	
}
int main(){
	fact();
	return 0;
}
