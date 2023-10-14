#include <stdio.h>

int main() {
    int totalDays, years, months, days;

    // Input total days
    printf("Enter total days: ");
    scanf("%d", &totalDays);

    // Calculate years, months, and days
    years = totalDays / 365;
    totalDays %= 365;
    months = totalDays / 30;
    days = totalDays % 30;

    // Print the converted values
    printf("Equivalent time: %d years, %d months, %d days\n", years, months, days);

    return 0;
}

