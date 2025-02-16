//C Program For Hexadecimal to Decimal Conversion 
#include <stdio.h>
#include <math.h>

int main() {
    char hex[20];
    int decimalNum = 0, base = 1, len, i;

    // Ask the user for input
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    // Find the length of the string
    len = strlen(hex);

    // Convert hexadecimal to decimal
    for (i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimalNum += (hex[i] - 48) * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimalNum += (hex[i] - 55) * base;  // ASCII value of 'A' is 65, so subtract 55 t
        }
        base *= 16;  // Increase base by 16 for each digit
    }

    // Print the decimal number
    printf("The decimal equivalent is: %d\n", decimalNum);

    return 0;
}