//C Program to Find the Length of a String
#include <stdio.h>
#include <string.h>  // For strlen() function

// Method 1: Using built-in strlen() function
void findLengthUsingStrlen(char *str) {
    int length = strlen(str);
    printf("Length of the string using strlen: %d\n", length);
}

// Method 2: Using a loop (manual calculation)
int findLengthUsingLoop(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Find length using built-in strlen() function
    findLengthUsingStrlen(str);
    
    // Find length using loop (manual method)
    int length = findLengthUsingLoop(str);
    printf("Length of the string using loop: %d\n", length);
    
    return 0;
}
