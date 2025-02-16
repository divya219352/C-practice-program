//C Program to Find Factorial of a Number
#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using a loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;  // Multiply factorial by i
        }
    // Print the result
     printf("The factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
    }

