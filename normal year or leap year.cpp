#include <stdio.h>
int main(){
	int n;
	printf("enter n value :");
	scanf("%d",&n);
	if (n%4==0) {
		printf("it is leap year");
	}
	else {
		printf("it is normal year");
	}
	return 0;
}
