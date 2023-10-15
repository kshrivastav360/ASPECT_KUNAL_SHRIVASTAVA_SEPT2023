#include <stdio.h>
int main(){
    float w1, w2, avgvalue;
    int p1, p2;
    printf("Enter the value of w1 :");
    scanf("%f", &w1);
    printf("Enter the value of w2 :");
    scanf("%f", &w2);
    printf("Enter the value of p1 :");
    scanf("%d", &p1);
    printf("Enter the value of p2 :");
    scanf("%d", &p2);
    avgvalue = ((w1 * p1) + (w2 * p2)) / (p1 + p2);
    printf("The Avg value is : %f", avgvalue);
    return 0;
}

