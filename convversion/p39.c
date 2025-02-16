//C Program For Boolean to String Conversion 
#include <stdio.h>

int main() {
    int booleanValue;

    // Ask the user for input
    printf("Enter a boolean value (0 or 1): ");
    scanf("%d", &booleanValue);

    // Check and print the corresponding string
    if (booleanValue == 1) {
        printf("The string representation is: true\n");
    } else if (booleanValue == 0) {
        printf("The string representation is: false\n");
    } else {
        printf("Invalid input! Please enter either 0 or 1.\n");
    }

    return 0;
}
