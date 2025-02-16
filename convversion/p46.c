//C Program For Octal to Decimal Conversion 
#include <stdio.h>
#include <math.h>

int main() {
    int octalNum, decimalNum = 0, i = 0, remainder;

    // Ask the user for input
    printf("Enter an octal number: ");
    scanf("%d", &octalNum);

    // Convert octal to decimal
    while (octalNum != 0) {
        remainder = octalNum % 10;  // Get the last digit (rightmost)
        decimalNum += remainder * pow(8, i);  // Add the digit's contribution to the decimal number
        octalNum /= 10;  // Remove the last digit from the octal number
        i++;  // Increment the position index
    }

    // Print the decimal number
    printf("The decimal equivalent is: %d\n", decimalNum);

    return 0;
}
