#include <stdio.h>

int main() {
    int number, i;
    
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &number);
    
    printf("\nMultiplication Table of %d (up to 10th row):\n", number);
    printf("=======================================\n");
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    printf("=======================================\n");
    
    return 0;
}
