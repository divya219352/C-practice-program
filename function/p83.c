//C Program to Find All Roots of a Quadratic Equation
#include <stdio.h>
#include <math.h>

// Function to find the roots of a quadratic equation
void findRoots(float a, float b, float c) {
    float discriminant, root1, root2;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if discriminant is positive, zero, or negative
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // One real root (both roots are same)
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2: %.2f\n", root1);
    }
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex.\n");
        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    float a, b, c;

    // Input the coefficients a, b, and c
    printf("Enter the coefficients of the quadratic equation (a, b, c):\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    // Check if 'a' is zero to avoid division by zero in quadratic equation
    if (a == 0) {
        printf("The value of 'a' cannot be zero in a quadratic equation.\n");
    } else {
        // Find and display the roots of the quadratic equation
        findRoots(a, b, c);
    }

    return 0;
}
