//C Program For Double to String Conversion
#include <stdio.h>

int main() {
    double doubleValue;
    char str[50];  // Array to hold the string representation of the double

    // Ask the user for input
    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);

    // Convert double to string using sprintf
    sprintf(str, "%.15lf", doubleValue);

    // Print the string representation of the double
    printf("The string representation is: %s\n", str);

    return 0;
}
