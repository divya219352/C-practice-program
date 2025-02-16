//C Program For Char to Int Conversion 
#include <stdio.h>

int main() {
    char ch;
    int num;

    // Ask the user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert the character to its ASCII value (integer)
    num = (int)ch;

    // Print the integer (ASCII) value of the character
    printf("The ASCII value of character '%c' is: %d\n", ch, num);

    return 0;
}
