#include <stdio.h>

int main() {
    int english, maths, science;
    
    
    printf("Enter marks for English: ");
    scanf("%d", &english);
    
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    
    
    int total_marks = english + maths + science;
    
    
    float percentage = total_marks / 3.0;
    
    
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    
   
    char result = (percentage >= 40) ? 'P' : 'F';
    
   
    printf("Result: %c\n", result);
    
    return 0;
}

