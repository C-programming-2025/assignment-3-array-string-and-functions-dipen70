// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).
#include <stdio.h>
int calculateGCD(int a, int b) {
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
    if (num1 < 1 || num2 < 1) {
        printf("Invalid input. Please enter positive integers.\n");
        return 1;
    }

    int gcd = calculateGCD(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}