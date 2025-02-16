//C Program to Determine the Unicode Code Point at a Given Index 
#include <stdio.h>

int main() {
    char str[200];
    int index;
    
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Input the index
    printf("Enter the index: ");
    scanf("%d", &index);
    
    // Check if the index is valid
    if (index >= 0 && index < strlen(str)) {
        // Print the Unicode code point at the given index
        printf("Unicode code point at index %d: %d\n", index, str[index]);
    } else {
        printf("Invalid index.\n");
    }
    
    return 0;
}
