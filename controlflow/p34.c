//C Program to Check Whether a Number is Prime or Not
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible, it's not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
