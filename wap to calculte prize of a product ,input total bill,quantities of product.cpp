#include <stdio.h>
int main(){
	float total_bill,quantity,price_per_unit;
	printf("enter total bill :");
	scanf("%f",&total_bill);
		printf("enter quantity :");
	scanf("%f",&quantity);
	
	
	price_per_unit = total_bill/quantity;
	
	printf("price per unit is : %2f\n",price_per_unit);

	
	return 0;
}
