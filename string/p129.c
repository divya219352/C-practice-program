//C Program to Sort a String
#include <stdio.h>
#include <string.h>

// Function to sort the string using Bubble Sort
void sortString(char *str) {
    int length = strlen(str);
    char temp;
    
    // Bubble Sort
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            // Swap if the character is greater than the next character
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Sort the string
    sortString(str);
    
    printf("Sorted string: %s\n", str);
    
    return 0;
}
