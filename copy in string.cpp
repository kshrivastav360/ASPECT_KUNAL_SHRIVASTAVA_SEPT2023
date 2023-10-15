#include <stdio.h>
int main(){
	char s[]= "Hello world";
	char d[20];
	int i=0;
	
	while (s[i]!='\0'){
		d[i]=s[i];
		i++;
	}
	printf("Source : %s\n",s);
	printf("Destination : %s\n",d);
	
	return 0;
}
