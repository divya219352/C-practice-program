//C Program to Split a String into a Number of Sub-Strings 
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string";  // Input string
    const char delimiter[] = " ";  // Delimiter for splitting (space in this case)
    
    // Using strtok() to split the string
    char *token = strtok(str, delimiter);
    
    // Print each token (substring)
    while (token != NULL) {
        printf("%s\n", token);  // Print the current substring
        token = strtok(NULL, delimiter);  // Get the next token
    }
    
    return 0;
}
