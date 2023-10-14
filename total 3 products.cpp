#include <stdio.h>
int main(){
    int r1, r2, r3, q1, q2, q3, p1, p2, p3, total_bill, dis_bill;
    printf("Enter the value of r1 :");
    scanf("%d", &r1);
    printf("Enter the value of r2 :");
    scanf("%d", &r2);
    printf("Enter the value of r3 :");
    scanf("%d", &r3);
    printf("Enter the value of q1 :");
    scanf("%d", &q1);
    printf("Enter the value of q2 :");
    scanf("%d", &q2);
    printf("Enter the value of q3 :");
    scanf("%d", &q3);
    p1 = r1 * q1;
    p2 = r2 * q2;
    p3 = r3 * q3;
    total_bill = p1 + p2 + p3;
    printf("the total bill is :%d\n", total_bill);
    dis_bill = (total_bill * 10) / 100;
    if (total_bill > 2000) {
        total_bill = total_bill - dis_bill;
        printf("The final bill after discount is :%d\n", total_bill);
    }
    return 0;
}


