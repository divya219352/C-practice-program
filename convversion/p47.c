//C Program For Decimal to Octal Conversion
#include <stdio.h>

int main() {
    int decimalNum, remainder;
    int octalNum[50];  // Array to store octal number
    int i = 0;

    // Ask the user for input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to octal
    while (decimalNum != 0) {
        remainder = decimalNum % 8;  // Get the remainder (last digit in octal)
        octalNum[i] = remainder;     // Store the remainder
        decimalNum /= 8;             // Divide the number by 8
        i++;                         // Increment the index
    }

    // Print the octal number
    printf("The octal equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);  // Print the octal digits in reverse order
    }
    printf("\n");

    return 0;
}
