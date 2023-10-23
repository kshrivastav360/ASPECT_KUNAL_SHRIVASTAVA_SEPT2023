#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void login();
int validate(char u1[], char ps1[]);
void scr1();

void scr1(){
	int ch;
	while(1){
		printf("\nPress 1 to login in : ");
		printf("\nPress 2 to exit : ");
		scanf("%d",&ch);
			if(ch==1){
		login();
	}
	else{
		exit(0);
	}
	}

}

int main(){
    scr1();
    return 0;
}

void login(){
    char usr[10], ps[10];
    int s;

    printf("Enter username : ");
    scanf("%s", usr);

    printf("Enter password : ");
    int i = 0;
    while(i < 10){
        ps[i] = getch();
        if(ps[i] =='\r'){  
            break;
        }
        printf("*");
        i++;
    }
    ps[i] = '\0';  

    s = validate(usr, ps);
    if(s == 1){
        printf("\nLogin successful\n");
    }
    else{
        printf("\nUnsuccessful\n");
    }
}

int validate(char u1[], char ps1[]){
    char tusr[] = "raj";
    char tps[] = "kumar";
    if(strcmp(u1, tusr) == 0 && strcmp(ps1, tps) == 0){
        return 1;
    }
    else{
        return 0;
    }
}

