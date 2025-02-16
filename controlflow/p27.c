//C Program to Print Fibonacci Series
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);  // Print first term
            continue;
        }
        if (i == 2) {
            printf("%d ", second); // Print second term
            continue;
        }
        next = first + second;  // Calculate the next term
        printf("%d ", next);
        first = second;  // Update the first term
        second = next;   // Update the second term
    }

    printf("\n");

    return 0;
}
