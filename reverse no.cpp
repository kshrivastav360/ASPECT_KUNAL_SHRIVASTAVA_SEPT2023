#include <stdio.h>
int main(){
	int arr[5];

	for (int i=0;i<=4;i++){
		printf("Enter element no :%d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=4;i>=0;i--){
		printf("The reverse no is :%d\n",arr[i]);
	}

	
	
	
return 0;
}




