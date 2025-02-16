//C Program to Insert a String into Another String
#include <stdio.h>
#include <string.h>

void insertString(char *str1, char *str2, int position) {
    // length of the original string and the string to insert
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Shift the characters of str1 to the right to make space for str2
    for (int i = len1 - 1; i >= position; i--) {
        str1[i + len2] = str1[i];
    }
    
    // Insert str2 at the specified position
    for (int i = 0; i < len2; i++) {
        str1[position + i] = str2[i];
    }
}

int main() {
    char str1[100], str2[50];
    int position;

    // Taking input for the strings and the position
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline character from input

    printf("Enter the second string to insert: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline character from input

    printf("Enter the position to insert at: ");
    scanf("%d", &position);

    // Make sure the position is within the bounds of the first string
    if (position >= 0 && position <= strlen(str1)) {
        insertString(str1, str2, position);
        printf("Resulting string: %s\n", str1);
    } else {
        printf("Invalid position!\n");
    }

    return 0;
}
