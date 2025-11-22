// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.
#include <stdio.h>

void calculateBinary(int n) {
    if (n == 0) {
        return; // binary of 0 is 0
    } else {
        calculateBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int number;
    printf("Enter a positive integer (n) for Binary Conversion: ");
    scanf("%d", &number); 

    printf("The binary representation of %d is: ", number);
    if (number == 0) {
        printf("0"); 
    } else {
        calculateBinary(number);
    }
    printf("\n");

    return 0;
}
