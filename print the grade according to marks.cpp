#include <stdio.h>
int main () {
	int n;
	printf("enter the value of n :");
	scanf ("%d",&n);
	if (n>90){
		printf("Excellent");
	}
	else if (n>60){
		printf("Very Good");
	}
	else if (n>40){
		printf("Average");
	}
	else {
		printf("fail");
	}
	
	 
	
	return 0;
}
