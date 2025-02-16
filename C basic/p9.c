//C Program to Calculate Fahrenheit to Celsius
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input: Fahrenheit value
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Formula to convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output: Celsius value
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
