//C Program to Print Prime Numbers From 1 to N
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Number is divisible by i, so it's not prime
        }
    }
    return true; // Number is prime
}

int main() {
    int N;

    // Get the value of N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Print prime numbers from 1 to N
    printf("Prime numbers from 1 to %d are:\n", N);
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

