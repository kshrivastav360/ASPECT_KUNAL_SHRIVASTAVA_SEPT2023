#include <stdio.h>

int main() {
    int employeeID;
    float totalHours, hourlyRate, salary;

    // Input employee details
    printf("Enter employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter total worked hours: ");
    scanf("%f", &totalHours);

    printf("Enter hourly rate: ");
    scanf("%f", &hourlyRate);

    // Calculate salary
    salary = totalHours * hourlyRate;

    // Print employee details and salary
    printf("Employee ID: %d\n", employeeID);
    printf("Salary for the month: rs%.2f\n", salary);

    return 0;
}

