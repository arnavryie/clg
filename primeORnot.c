#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    
    // Handle special cases
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
