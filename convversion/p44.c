//C Program For Int to Char Conversion 
#include <stdio.h>

int main() {
    int num;
    char ch;

    // Ask the user for input
    printf("Enter an integer (between 0 and 255): ");
    scanf("%d", &num);

    // Check if the input is within the valid ASCII range
    if (num >= 0 && num <= 255) {
        // Convert the integer to character using type casting
        ch = (char)num;

        // Print the corresponding character
        printf("The character corresponding to integer %d is: %c\n", num, ch);
    } else {
        printf("Please enter a valid integer between 0 and 255.\n");
    }

    return 0;
}
