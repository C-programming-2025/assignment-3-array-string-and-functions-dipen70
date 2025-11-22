// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.
#include <stdio.h>
void printTriangle(int n, int i) {
    if (i > n) {
        return; 
    }

    for (int j = 1; j <= i; j++) {
        printf("*");
    }
    printf("\n");
    printTriangle(n, i + 1); 
}
int main() {
    int n;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);
    if (n < 1) {
        printf(" enter a positive integer.\n");
        return 1;
    }

    printTriangle(n, 1); // (n,1) because we start printing from row 1 and go up to n
    return 0;
}