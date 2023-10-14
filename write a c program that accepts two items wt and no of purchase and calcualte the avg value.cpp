#include <stdio.h>

int main() {
    float weight1, weight2, numPurchase1, numPurchase2;
    float totalWeight, totalPurchase, average;

    // Input weights and number of purchases
    printf("Enter weight of item 1: ");
    scanf("%f", &weight1);

    printf("Enter number of purchases of item 1: ");
    scanf("%f", &numPurchase1);

    printf("Enter weight of item 2: ");
    scanf("%f", &weight2);

    printf("Enter number of purchases of item 2: ");
    scanf("%f", &numPurchase2);

    // Calculate total weight and total purchase
    totalWeight = (weight1 * numPurchase1) + (weight2 * numPurchase2);
    totalPurchase = numPurchase1 + numPurchase2;

    // Calculate average
    average = totalWeight / totalPurchase;

    // Display the result
    printf("Average weight of items: %.2f\n", average);

    return 0;
}

