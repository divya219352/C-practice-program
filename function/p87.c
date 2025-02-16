//C Program to Find G.C.D Using Recursion
#include <stdio.h>

// Recursive function to find the GCD of two numbers
int gcd(int a, int b) {
    // Base case: If second number becomes 0, return first number as GCD
    if (b == 0) {
        return a;
    }
    // Recursive step: Call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find and display the GCD of the two numbers
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
