#include <stdio.h>
#include <string.h>

void login();
int validate(char u1[],char ps1[]);

int main(){
	login();
	return 0;
}
void login(){
	char usr[10],ps[10];
	int s;
	printf("Enter username : ");
	scanf("%s",usr);
	printf("Enter password : ");
	scanf("%s",ps);
	s=validate(usr,ps);
	if(s==1){
		printf("Login successful\n");
	}
	else{
		printf("Unsuccessful\n");
	}
}
int validate(char u1[],char ps1[]){
	char tusr[]={"raj"};
	char tps[]={"kumar"};
	if(strcmp(u1,tusr)==0 && strcmp(ps1,tps)==0){
		return 1;
	}
	else{
		return 0;
	}
}
