#include <stdio.h>
void evenodd(){
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Even no");
	}
	else{
		printf("Odd no");
	}
	return ;
	}
	
	int main(){
		evenodd();
		return 0;
	}
