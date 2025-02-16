//C Program to Display Prime Numbers Between Two Intervals Using Functions 
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

// Function to display prime numbers between two intervals
void displayPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Input the interval range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Display prime numbers in the given range
    displayPrimesInRange(start, end);

    return 0;
}
