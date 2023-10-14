#include <stdio.h>
int main(){
	float eng,math,sci,total,percent;
	printf("enter english marks :");
	scanf("%f",&eng);
		printf("enter math marks :");
	scanf("%f",&math);
		printf("enter science marks :");
	scanf("%f",&sci);
	total=(eng+math+sci);
	percent=(total/300)*100;
	printf("\n total is : %2f",total);
	printf("percent is : %2f",percent);
	
	
	return 0;
}
