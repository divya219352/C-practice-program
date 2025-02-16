//C Program to Find the Sum of Natural Numbers using Recursion 
#include <stdio.h>

// Recursive function to find the sum of natural numbers
int sumOfNaturalNumbers(int n) {
    if (n <= 1) {
        return n;  // Base case: when n is 1 or less, return n
    }
    return n + sumOfNaturalNumbers(n - 1);  // Recursive step: add n to the sum of the next number
}

int main() {
    int number;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Calculate and display the sum of natural numbers
        int sum = sumOfNaturalNumbers(number);
        printf("The sum of natural numbers up to %d is: %d\n", number, sum);
    }

    return 0;
}
