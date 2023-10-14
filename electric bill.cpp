#include <stdio.h>
int main(){
    float n;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    if(n >= 0 && n < 150){
        n = 4.50;  // Assigning 4.50 to n
        printf("The electric bill is : %f\n", n);
    }
    else if (n>150 && n<400){
	    n=5.50; //Assigning 5.50 to n
		printf("The electric bill is :%f\n",n); 
	}
	else if (n>400){
		n=7.00; //Assigning 7.00 to n
		printf("The electric bill is :%f\n",n);
	}

    return 0;
}

