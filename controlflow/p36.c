//C Program to Check whether the input number is a Neon Number
#include <stdio.h>

int main() {
    int num, square, sum = 0, remainder;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the square of the number
    square = num * num;

    // Calculate the sum of the digits of the square
    while (square != 0) {
        remainder = square % 10;  // Get the last digit of the square
        sum += remainder;         // Add it to the sum
        square /= 10;             // Remove the last digit
    }

    // Check if the sum of the digits of the square is equal to the original number
    if (sum == num) {
        printf("%d is a Neon number.\n", num);
    } else {
        printf("%d is not a Neon number.\n", num);
    }

    return 0;
}
