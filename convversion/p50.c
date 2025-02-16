//C Program For Decimal to Binary Conversion 
#include <stdio.h>

void decimalToBinary(int decimalNum) {
    int binaryNum[32];  // Array to store binary number
    int i = 0;

    // Special case for zero
    if (decimalNum == 0) {
        printf("The binary equivalent is: 0\n");
        return;
    }

    // Convert decimal to binary
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;  // Get remainder (0 or 1)
        decimalNum /= 2;  // Divide the number by 2
        i++;  // Move to next position in the array
    }

    // Print the binary number (in reverse order)
    printf("The binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);  // Print digits in reverse order
    }
    printf("\n");
}

int main() {
    int decimalNum;

    // Ask the user for input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Call the function to convert and print the binary number
    decimalToBinary(decimalNum);

    return 0;
}
