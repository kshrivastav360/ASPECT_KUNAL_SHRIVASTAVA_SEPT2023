#include <stdio.h>
int main(){
    int n, c, r, arm=0;
    printf("Enter the value :");
    scanf("%d",&n);
    c = n;

    for(; n > 0; n = n/10){
        r = n % 10;
        arm = (r*r*r) + arm;
    }

    if (c == arm){
        printf("Armstrong number ");
    }
    else {
        printf("Not Armstrong number ");
    }

    return 0;
}

