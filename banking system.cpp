#include <stdio.h>
#include <conio.h>
void createacc();
int list();
void deposit();
void last();
void withdraw();
void transfer();
void checkDetail();

int ta = 10000, amt, amo, tr, tdp = 0, tw = 0, ttr = 0;
int acc;
char a[50];

int main() {
    int choice; 
    printf("\nEnter your name : ");
    scanf("%s", a);
    printf("\nEnter your account no : ");
    scanf("%d", &acc);

    while (1) {
        choice = list(); 

        switch (choice) { 
            case 1:
                deposit();
                tdp += amt;
                break;
            case 2:
                withdraw();
                if (amo <= ta)
                    tw += amo;
                break;
            case 3:
                transfer();
                if (tr <= ta)
                    ttr += tr;
                break;
            case 4:
                checkDetail();
                break;
            case 5:
                last();
                getch(); 
                return 0; 
            default:
                printf("\nInvalid value entered. Please try again.");
        }
    }
}

void createacc(){
	char s[10]={"Kunal Shrivastav"};
	printf("Your account name is : %s",s);
	int accno = 3425;
	printf("Your account no is : %d",accno);
}

int list() {
    int choice;
    printf("\n1. Deposit amount ");
    printf("\n2. Withdraw amount ");
    printf("\n3. Transfer amount ");
    printf("\n4. Check details ");
    printf("\n5. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice; 
}

void deposit() {
    printf("\nEnter amount you want to deposit: ");
    scanf("%d", &amt);
    ta += amt;
}

void withdraw() {
    printf("\nEnter amount you want to withdraw: ");
    scanf("%d", &amo);
    if (amo <= ta) {
        ta -= amo;
    } else {
        printf("\nInsufficient balance for withdrawal");
    }
}

void transfer() {
    printf("\nEnter the amount you want to transfer: ");
    scanf("%d", &tr);
    if (tr <= ta) {
        ta -= tr;
    } else {
        printf("\nInsufficient balance for transfer");
    }
}

void checkDetail() {
    printf("\nTotal amount : %d", ta);
    printf("\nTotal deposited amount : %d", tdp);
    printf("\nTotal withdraw amount : %d", tw);
    printf("\nTotal transfer amount : %d", ttr);
}

void last() {
    printf("\nYour name = %s", a);
    printf("\nYour Account no = %d", acc); 
    printf("\nTotal amount : %d", ta);
    printf("\nTotal deposited amount : %d", tdp);
    printf("\nTotal withdraw amount : %d", tw);
    printf("\nTotal transfer amount : %d", ttr);
    printf("\n***Thanks***");
}


