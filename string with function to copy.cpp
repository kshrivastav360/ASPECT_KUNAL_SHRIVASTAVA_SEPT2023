#include <stdio.h>
#include <string.h>
int main(){
	char s[]="Hello World";
	char d[20];
	int i=0;
	
	strcpy(d,s);
	
	printf("Source :%s\n",s);
	printf("Destination :%s\n",d);
	
	return 0;
}
