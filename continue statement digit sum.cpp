#include <stdio.h>
int main(){
	int i,a,sum=0;
	for (i=1;i<=5;i++){
		printf("Enter the no :");
		scanf("%d",&a);
		if (a<0){
			continue;
		}
		sum=sum+a;
		printf("sum :%d",sum);
	}
	return 0;
}
