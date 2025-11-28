#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;
    int digits = 0;
    
    printf("Enter a number to check if it's Armstrong: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Count number of digits
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }
    
    originalNum = num;
    
    // Calculate sum of digits raised to power of total digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }
    
    // Check if it's Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
