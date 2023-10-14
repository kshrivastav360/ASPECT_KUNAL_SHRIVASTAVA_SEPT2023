#include <stdio.h>

int main() {
    int totalDistance;
    float spentFuel, averageConsumption;

    // Input total distance and spent fuel
    printf("Enter total distance (in km): ");
    scanf("%d", &totalDistance);

    printf("Enter spent fuel (in liters, with two decimal places): ");
    scanf("%f", &spentFuel);

    // Calculate average consumption
    averageConsumption = totalDistance / spentFuel;

    // Print average consumption
    printf("Average consumption: %.2f km/l\n", averageConsumption);

    return 0;
}

