//C Program For String to Long Conversion
#include <stdio.h>
#include <stdlib.h>  // For strtol()

int main() {
    char str[50];
    long longValue;

    // Ask the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string input
    
    // Convert string to long using strtol
    longValue = strtol(str, NULL, 10);  // Converts string to long with base 10

    // Print the long value
    printf("The long integer value is: %ld\n", longValue);

    return 0;
}
