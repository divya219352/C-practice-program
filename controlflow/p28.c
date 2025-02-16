//C Program to Find LCM of Two Numbers
#include <stdio.h>

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcm;

    // Ask the user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate LCM using the formula LCM(a, b) = (a * b) / GCD(a, b)
    lcm = (num1 * num2) / gcd(num1, num2);

    // Print the result
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
