//C Program to Check Whether a Number can be Express as Sum of Two Prime Numbers
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // n is divisible by i, so it's not prime
        }
    }

    return 1;  // n is prime
}

// Function to check if a number can be expressed as sum of two prime numbers
int checkSumOfTwoPrimes(int number) {
    for (int i = 2; i <= number / 2; i++) {
        if (isPrime(i) && isPrime(number - i)) {
            printf("%d can be expressed as the sum of two prime numbers: %d + %d\n", number, i, number - i);
            return 1;  // Found two prime numbers that sum up to the number
        }
    }
    return 0;  // No such pair found
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number can be expressed as the sum of two prime numbers
    if (!checkSumOfTwoPrimes(number)) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", number);
    }

    return 0;
}
