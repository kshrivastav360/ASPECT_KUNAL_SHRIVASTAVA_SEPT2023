#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Taking input for array elements
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int fact = 1;

        for (int j = 1; j <= num; j++) {
            fact *= j;
        }

        printf("Factorial of %d is: %d\n", num, fact);
    }

    return 0;
}

