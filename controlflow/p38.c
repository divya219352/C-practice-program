//C program to  Sum of Fibonacci Numbers at Even Indexes up to N Terms 
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, sum = 0;

    // Ask the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the Fibonacci numbers and sum those at even indexes
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += first; // Add Fibonacci number at even index
        }
        next = first + second;
        first = second;
        second = next;
    }

    // Print the result
    printf("Sum of Fibonacci numbers at even indexes up to %d terms is: %d\n", n, sum);

    return 0;
}
