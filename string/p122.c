//C Program to Add or Concatenate Two Strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character at the end of each string (if present)
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
