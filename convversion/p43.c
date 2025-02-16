//C Program For Long to String Conversion
#include <stdio.h>
#include <stdlib.h>  // For itoa() function

int main() {
    long longValue;
    char str[50];  // Array to hold the string representation of the long value

    // Ask the user for input
    printf("Enter a long integer: ");
    scanf("%ld", &longValue);

    // Convert long to string using snprintf
    snprintf(str, sizeof(str), "%ld", longValue);

    // Print the string representation of the long integer
    printf("The string representation is: %s\n", str);

    return 0;
}
