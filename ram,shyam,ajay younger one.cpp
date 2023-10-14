#include <stdio.h> 
int main() {
	int ram,shyam,ajay;
	printf("eneter the age of ram :");
	scanf("%d",&ram);
		printf("eneter the age of shyam :");
	scanf("%d",&shyam);
		printf("eneter the age of ajay :");
	scanf("%d",&ajay);
	if (ram<shyam && ram<ajay){
		printf("%d is the younger ",ram);
	}
	if(shyam<ram && shyam<ajay) {
		printf("%d is the younger",shyam);
	}
	if (ajay<ram && ajay<shyam) {
		printf("%d is the younger",ajay);
	}
}
