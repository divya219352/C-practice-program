//C Program to Display Prime Numbers Between Intervals
#include <stdio.h>

int main() {
    int lower, upper, num, i, isPrime;

    // Ask the user for the interval range
    printf("Enter the lower interval: ");
    scanf("%d", &lower);
    printf("Enter the upper interval: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    // Loop through the interval and check if each number is prime
    for (num = lower; num <= upper; num++) {
        if (num <= 1) {
            continue; // Skip numbers less than or equal to 1
        }

        isPrime = 1; // Assume the number is prime

        // Check if num is divisible by any number between 2 and num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime if divisible by any number
                break;
            }
        }

        // If the number is prime, print it
        if (isPrime) {
            printf("%d ", num);
        }
      }

      printf("\n");

     return 0;
}
