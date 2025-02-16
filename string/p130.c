//C Program to Check For Pangram String
#include <stdio.h>
#include <ctype.h>  // For tolower() function

// Function to check if the string is a pangram
int isPangram(char *str) {
    int alphabet[26] = {0};  // Array to track the occurrence of each letter (a-z)
    
    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert the character to lowercase to handle case insensitivity
        char ch = tolower(str[i]);
        
        // Check if the character is a letter
        if (ch >= 'a' && ch <= 'z') {
            // Mark the letter as found by setting the corresponding array element to 1
            alphabet[ch - 'a'] = 1;
        }
    }
    
    // Check if all letters from 'a' to 'z' are found
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            return 0;  // Not a pangram
        }
    }
    
    return 1;  // It is a pangram
}

int main() {
    char str[200];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Check if the string is a pangram
    if (isPangram(str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }
    
    return 0;
}
