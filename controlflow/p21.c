//C Program to Calculate Sum of Natural Numbers 
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers
    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;  // Add the current number to sum
        }

        // Print the result
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}
