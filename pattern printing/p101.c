//C Program to Print Pascal’s Pattern Triangle Pyramid 
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient (nCr)
int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows for Pascal's Triangle Pyramid: ");
    scanf("%d", &rows);

    // Print the Pascal's Triangle in a pyramid shape
    for(i = 0; i < rows; i++) {
        // Print leading spaces to center-align the pyramid
        for(j = 0; j < (rows - i - 1); j++) {
            printf(" ");
        }

        // Print the binomial coefficients for the current row
        for(j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
