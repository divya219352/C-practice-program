//C Program For Float to String Conversion
#include <stdio.h>

int main() {
    float floatValue;
    char str[50];  // Array to hold the string representation of the float

    // Ask the user for input
    printf("Enter a floating-point number: ");
    scanf("%f", &floatValue);

    // Convert float to string using sprintf
    sprintf(str, "%f", floatValue);

    // Print the string representation of the float
    printf("The string representation is: %s\n", str);

    return 0;
}
