#include<stdio.h>
int main(){
	float lnamt,roi,dur,intr,totint,repay,emi;
	printf("enter loan amount :");
	scanf("%f",&lnamt);
	printf("enter rate of interst :");
	scanf("%f",&roi);
	printf("enter duration :");
	scanf("%f",&dur);
	intr=(lnamt*roi)/100;
	totint=intr*dur;
	repay=lnamt+totint;
	emi=(repay/(dur*12));
	printf ("\n the interest is :%2f",intr);
	printf("\nthe total interest is :%2f",totint);
	printf("\n repay is :%2f",repay);
	printf("\n the emi is :%2f",emi);
	
	
	return 0;
}

