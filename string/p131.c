//C Program to Print the First Letter of Each Word 
#include <stdio.h>
#include <ctype.h>  // For checking if a character is a letter

void printFirstLetterOfEachWord(char *str) {
    int i = 0;
    
    // Flag to track if we are at the beginning of a word
    int inWord = 0;
    
    while (str[i] != '\0') {
        // If the current character is a letter and we are not already in a word
        if (isalpha(str[i]) && !inWord) {
            printf("%c", str[i]);  // Print the first letter of the word
            inWord = 1;  // Now we are inside a word
        }
        // If the current character is not a letter, we are not in a word anymore
        else if (!isalpha(str[i])) {
            inWord = 0;
        }
        i++;
    }
    printf("\n");
}

int main() {
    char str[200];
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Print the first letter of each word
    printFirstLetterOfEachWord(str);
    
    return 0;
}
