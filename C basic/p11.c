//C Program to Add Two Complex Numbers 
#include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;

    // Input the real and imaginary parts of the first complex number
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input the real and imaginary parts of the second complex number
    printf(
