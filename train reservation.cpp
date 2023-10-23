#include <stdio.h>

void choice() {
    char n1[20];
    int n2;
    int n3;
    printf("Enter passenger name: ");
    scanf("%s", n1);
    printf("Enter passenger Id: ");
    scanf("%d", &n2);
    printf("Enter age of passenger: ");
    scanf("%d", &n3);
    int choice;

    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Seat confirmed in general department\n");
    } else if (choice == 2) {
        printf("Seat confirmed in sleeper department\n");
    } else if (choice == 3) {
        printf("Seat confirmed in A.C department\n");
    } else {
        printf("You have entered an invalid button\n");
        printf("****Thanks***");
    }

    return;
}
int main(){
	choice();
	return 0;
}

