//C Program to Calculate Power Using Recursion
#include <stdio.h>

// Recursive function to calculate power
int power(int base, int exponent) {
    // Base case: If exponent is 0, return 1 (any number raised to the power 0 is 1)
    if (exponent == 0) {
        return 1;
    }
    // Recursive step: base^exponent = base * base^(exponent-1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Check for negative exponent
    if (exponent < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        // Calculate and display the power
        int result = power(base, exponent);
        printf("%d raised to the power of %d is: %d\n", base, exponent, result);
    }

    return 0;
}
