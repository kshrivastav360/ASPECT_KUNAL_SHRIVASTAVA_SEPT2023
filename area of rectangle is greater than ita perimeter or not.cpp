#include <stdio.h>
int main() {
	int l,b,a,p;
	printf("enter length :");
	scanf("%d",&l);
		printf("enter bredth :");
	scanf("%d",&b);
	a=l*b;
	p=2*(l+b);
	if (a>p) {
		printf("the area is grater than its perimeter ");
	}
	else {
		printf("perimeter is greater than area ");
	}
	return 0;
}
