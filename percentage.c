#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    
    printf("Enter marks for five subjects (out of 100 each):\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;
    
    printf("\n--- Student Result ---\n");
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    // Determine result and grade
    if (percentage >= 40) {
        printf("Result: Pass\n");
        if (percentage >= 90) printf("Grade: A\n");
        else if (percentage >= 80) printf("Grade: B\n");
        else if (percentage >= 70) printf("Grade: C\n");
        else if (percentage >= 60) printf("Grade: D\n");
        else printf("Grade: E\n");
    } else {
        printf("Result: Fail\n");
        printf("Grade: F\n");
    }
    
    return 0;
}
