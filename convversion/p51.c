//C Program For Binary to Decimal Conversion
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binaryNum) {
    int decimalNum = 0, i = 0, remainder;
    
    while (binaryNum != 0) {
        remainder = binaryNum % 10;  // Get the rightmost digit (0 or 1)
        decimalNum += remainder * pow(2, i);  // Add the digit's contribution to decimal number
        binaryNum /= 10;  // Remove the rightmost digit from binary number
        i++;  // Increment the power of 2
    }
    
    return decimalNum;
}

int main() {
    long long binaryNum;
    
    // Ask the user for input
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    // Call the function to convert and print the decimal number
    int decimalNum = binaryToDecimal(binaryNum);
    printf("The decimal equivalent is: %d\n", decimalNum);

    return 0;
}
