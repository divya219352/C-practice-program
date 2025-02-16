//C Program For Decimal to Hexadecimal Conversion 
#include <stdio.h>

void decimalToHexadecimal(int decimalNum) {
    char hex[50];  // Array to store the hexadecimal number
    int remainder, i = 0;

    // Special case for zero
    if (decimalNum == 0) {
        printf("The hexadecimal equivalent is: 0\n");
        return;
    }

    // Convert decimal to hexadecimal
    while (decimalNum != 0) {
        remainder = decimalNum % 16;  // Get remainder
        if (remainder < 10) {
            hex[i] = remainder + '0';  // Convert number to character (0-9)
        } else {
            hex[i] = remainder - 10 + 'A';  // Convert number to character (A-F)
        }
        decimalNum /= 16;  // Divide the number by 16
        i++;  // Move to next position in the array
    }

    // Print the hexadecimal number (in reverse order)
    printf("The hexadecimal equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);  // Print characters in reverse order
    }
    printf("\n");
}

int main() {
    int decimalNum;

    // Ask the user for input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Call the function to convert and print the hexadecimal number
    decimalToHexadecimal(decimalNum);

    return 0;
}
