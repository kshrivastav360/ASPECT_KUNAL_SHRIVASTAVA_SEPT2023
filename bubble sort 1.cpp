#include <stdio.h>
int main(){
	int a[5],temp,i,j;
	
	printf("Enter the 5 no :\n");
	
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=3;i<=i-1;i++){
		for(j=0;j<=i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<=4;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
