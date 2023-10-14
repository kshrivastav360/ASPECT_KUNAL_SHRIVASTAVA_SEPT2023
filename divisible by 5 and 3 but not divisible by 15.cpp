#include <stdio.h>
int main() {
	int n;
		printf("eneter the value of n :");
	scanf("%d",&n);
	if ((n%5==0 || n%3==0) && n%15!=0) 
	    printf("the no is divisible by 5 and 3 but not by 15");
	else 
	    printf("condition not matched");
	return 0;
}
