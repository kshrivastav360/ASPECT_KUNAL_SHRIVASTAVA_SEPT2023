#include <stdio.h>

int main() {
    int positiveCount = 0;
    int positiveSum = 0;
    int number;

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number > 0) {
            positiveCount++;
            positiveSum += number;
        }
    }

    if (positiveCount > 0) {
        float positiveAverage = (float)positiveSum / positiveCount;
        printf("Number of positive numbers: %d\n", positiveCount);
        printf("Average of positive numbers: %.2f\n", positiveAverage);
    } else {
        printf("No positive numbers were entered.\n");
    }

    return 0;
}

