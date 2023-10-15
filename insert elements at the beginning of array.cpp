#include <stdio.h>

int main() {
    int a[100], n, i, item;

    printf("Enter the Size of array: ");
    scanf("%d", &n);

    printf("Enter elements to array:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter array element to insert at the beginning: ");
    scanf("%d", &item);
    n++;

    for (i = n-1; i > 0; i--){
        a[i] = a[i-1];
    }
    a[0] = item;

    printf("Resultant array elements: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

