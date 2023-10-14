#include <stdio.h>
int main(){
	int custid,oldrd,newrd,cunt,untrt=5;
	float totbill;
	printf("enter customer id :");
	scanf("%d",&custid);
		printf("enter old reading :");
	scanf("%d",&oldrd);
		printf("enter new reading :");
	scanf("%d",&newrd);
	cunt=newrd-oldrd;
	totbill=cunt*untrt;
	printf("\nunit rate :%d",cunt);
	printf("\ntotal bill :%2f",totbill);
	
	return 0;
	
}


