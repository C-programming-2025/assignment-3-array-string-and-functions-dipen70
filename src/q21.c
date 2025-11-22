// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.
#include <stdio.h>
int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * calculateFactorial(n - 1); 
    
}
int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    int result = calculateFactorial(n);
    printf("Factorial of %d is %d\n", n, result);

    return 0;
}