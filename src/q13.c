#include <stdio.h>

int findfact(int num) {
    int fact = 1;
    int i;
    
    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = findfact(num);
    printf("Factorial of %d is %d", num, result);

    return 0;
}
