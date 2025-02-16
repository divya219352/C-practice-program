//C Program to check if the string is palindrome or not
#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For tolower() to ignore case

int isPalindrome(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        // Ignore non-alphanumeric characters and convert to lowercase
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            // Compare characters
            if (tolower(str[start]) != tolower(str[end])) {
                return 0;  // Not a palindrome
            }
            start++;
            end--;
        }
    }
    return 1;  // It's a palindrome
}

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
