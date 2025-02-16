//C Program to Get a Non-Repeating Character From the Given String
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256  // Maximum number of characters in ASCII

char getNonRepeatingCharacter(char *str) {
    int count[MAX_CHAR] = {0};  // Array to store the frequency of each character
    
    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    // Find the first character with a frequency of 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(int)str[i]] == 1) {
            return str[i];  // Return the first non-repeating character
        }
    }

    return '\0';  // Return null character if no non-repeating character is found
}

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    char result = getNonRepeatingCharacter(str);

    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
