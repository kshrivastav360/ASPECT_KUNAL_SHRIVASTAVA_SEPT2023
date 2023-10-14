#include <stdio.h>
int main(){
	float  p,rate,time,si;
	printf("the principal is :");
	scanf("%f",&p);
	printf("the rate is :");
	scanf("%f",&rate);
		printf("the time is :");
		scanf("%f",&time);
	si = (p*rate*time)/100;
	 printf("the simple interst is : %f",si);
	 
	
	
	return 0;
}
