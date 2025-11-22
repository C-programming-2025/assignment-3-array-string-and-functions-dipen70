// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include<stdio.h>
int calculatePower(int base, int exponent){
int calc_power = 1;
int i;
for(i = 0; i < exponent; i++){
    calc_power = calc_power * base; // base * base * base for exponent is 3
}
return calc_power;
}
int main() {
    int base, exponent, result;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    result = calculatePower(base, exponent); // this function call calculates base^exponent
    printf("%d raised to the power of %d is %d\n", base, exponent, result);
    return 0;
}