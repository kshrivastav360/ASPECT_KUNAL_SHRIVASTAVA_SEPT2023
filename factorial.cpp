#include <stdio.h>
int main(){
	int n,product;
	printf("Enter no :");
	scanf("%d",&n);
	product = 1;
	for (int i=1;i<=n;i++){
		product = product * i;
	}
	printf("the factorial is :%d",product);
	return 0;
}
