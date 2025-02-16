//C Program to Calculate the Factorial of a Number Using Recursion 
#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n <= 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1);  // Recursive step: n * factorial of (n-1)
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        long long result = factorial(number);
        printf("The factorial of %d is: %lld\n", number, result);
    }

    return 0;
}
