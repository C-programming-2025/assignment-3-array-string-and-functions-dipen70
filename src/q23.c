// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).
#include <stdio.h>
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a; // the value of a when b is 0 is the GCD, so GCD is a
    }
    return calculateGCD(b, a % b); // here we call the function recursively with b and a%b, so a is now b and b is a%b
}
int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 1 || num2 < 1) {
        printf("Error! Please enter positive integers.\n");
        return 1;
    }

    int gcd = calculateGCD(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}