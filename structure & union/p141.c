//C Program to Add Two Complex Numbers by Passing Structure to a Function
#include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    float real;   // Real part of the complex number
    float imag;   // Imaginary part of the complex number
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;  // Add real parts
    result.imag = c1.imag + c2.imag;  // Add imaginary parts
    return result;
}

int main() {
    struct Complex c1, c2, sum;

    // Input for first complex number
    printf("Enter real and imaginary parts of first complex number (c1): ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input for second complex number
    printf("Enter real and imaginary parts of second complex number (c2): ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Add the complex numbers by calling the function
    sum = addComplex(c1, c2);

    // Output the result
    printf("Sum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}