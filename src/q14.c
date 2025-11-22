// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature. 
#include <stdio.h>
float convertTemperature() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return fahrenheit;
}
int main() {
    float fahrenheit = convertTemperature();
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}