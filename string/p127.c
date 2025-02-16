//C program to Reverse a String Using Recursion
#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    // Base case: If the start index is greater than or equal to end, stop recursion
    if (start >= end)
        return;
    
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursive call with the next positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    // Get the length of the string
    int length = strlen(str);
    
    // Reverse the string using recursion
    reverseString(str, 0, length - 1);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
