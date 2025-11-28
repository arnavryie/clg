#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate LCM using formula: LCM(a,b) = (a * b) / GCD(a,b)
    long long lcm = ((long long)num1 * num2) / gcd(num1, num2);
    
    printf("LCM of %d and %d is: %lld\n", num1, num2, lcm);
    
    return 0;
}
