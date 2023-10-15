#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 4;
    int count = 0;

    for (int i = 0; i <= 6; i++) {
        if (x < arr[i]) {
            count++;
        }
    }

    printf("Number of elements greater than %d: %d\n", x, count);

    return 0;
}

