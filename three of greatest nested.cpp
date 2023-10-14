#include <stdio.h>
int main(){
	int a,b,c;
    printf("eneter the value of a :");
	scanf("%d",&a);
	printf("eneter the value of b :");
	scanf("%d",&b);
	printf("eneter the value of c :");
	scanf("%d",&c);
	if (a>b){
		if (a>c)
		printf("%d is greatest",a);
		else
		printf("%d is greatest ",c);
	}
	else {
		if (b>c)
		  printf("%d is greatest ",b);
		else
		  printf("%d is greatest ",c);
		   
		
	}
	
	return 0;
}
