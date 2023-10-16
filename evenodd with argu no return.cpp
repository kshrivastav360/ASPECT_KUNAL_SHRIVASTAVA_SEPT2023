#include<stdio.h>

void evenodd(int n){
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Even no");
	}
	else{
		printf("odd no");
	}
	return ;
}

int main(){
	int x=0;
	evenodd(x);
	

	return 0;
	
}
