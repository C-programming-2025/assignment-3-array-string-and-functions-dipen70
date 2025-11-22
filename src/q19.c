//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>
int calculateFactorial(int num) {
    if (num < 0) {
        return 0; // Factorial is not defined for negative numbers
    }
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 0;
    }

    printf("Factorial series up to %d is:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d * %d = %d\n",n, i, calculateFactorial(i));
    }

    return 0;
}