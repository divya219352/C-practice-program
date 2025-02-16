//C Program to Compare Two Strings Lexicographically 
#include <stdio.h>
#include <string.h>  // For strcmp function

int main() {
    char str1[100], str2[100];
    
    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // Remove the trailing newline character from fgets()
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove the trailing newline character from fgets()
    str2[strcspn(str2, "\n")] = '\0';
    
    // Compare the two strings lexicographically using strcmp()
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("The strings are lexicographically equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically greater than the second string.\n");
    }
    
    return 0;
}
