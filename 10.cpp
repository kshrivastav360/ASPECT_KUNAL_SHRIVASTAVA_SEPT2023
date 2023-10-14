#include <stdio.h>

int main() {
    int marks, totalMarks = 0, numStudents = 0;

    while (1) {
        printf("Enter marks for student %d (or enter 0 or a negative value to finish): ", numStudents + 1);
        scanf("%d", &marks);

        if (marks <= 0) {
            break;
        }

        totalMarks += marks;
        numStudents++;
    }

    if (numStudents > 0) {
        float average = totalMarks / numStudents;
        printf("Average marks in mathematics: %.2f\n", average);
    } else {
        printf("No valid marks were entered.\n");
    }

    return 0;
}

