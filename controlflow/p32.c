//C Program to Reverse a Number
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;           // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Build the reversed number
        num /= 10;                      // Remove the last digit
    }

    // Print the reversed number
    printf("Reversed number is: %d\n", reversedNum);

    return 0;
}
