#include <stdio.h>
int main() {
	int a,b,c;
		printf("eneter the first side :");
	scanf("%d",&a);
		printf("eneter the second side :");
	scanf("%d",&b);
		printf("eneter the third side :");
	scanf("%d",&c);
	if (a+b>c && b+c>a && a+c>b){
		printf("valid triangle");
	}
	else {
		printf("invalid triangle");
	}
	return 0;
	
}
