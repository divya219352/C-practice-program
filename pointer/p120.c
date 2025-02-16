//C Program to Check if a String is a Palindrome using Pointers
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str) {
    // Use two pointers: one at the beginning and one at the end
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters
        if (!isalnum(*start)) {
            start++;
        } else if (!isalnum(*end)) {
            end--;
        } else {
            // Compare characters (case-insensitive)
            if (tolower(*start) != tolower(*end)) {
                return 0; // Not a palindrome
            }
            start++;
            end--;
        }
    }
    return 1; // It is a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
