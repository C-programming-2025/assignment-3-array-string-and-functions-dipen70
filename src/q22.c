// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.
#include <stdio.h>
int calculateFibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: Fibonacci of 0 is 0
    } else if (n == 1) {
        return 1; // Base case: Fibonacci of 1 is 1
    }
    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2); // Recursive case, we don;t print the series here but calculate the nth Fibonacci number
}
int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    int result = calculateFibonacci(n);
    printf("The %dth Fibonacci number is %d\n", n, result);

    return 0;
}