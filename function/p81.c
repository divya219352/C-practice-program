//C Program to Check Prime Number By Creating a Function
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // n is divisible by i, so it's not a prime number
        }
    }

    return 1;  // n is prime
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime using the isPrime function
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
