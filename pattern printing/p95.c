//C Program to Print Character Pattern  
#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;

    // Ask user for the number of rows
    printf("Enter the number of rows for the character pattern: ");
    scanf("%d", &rows);

    // Loop through each row
    for(i = 1; i <= rows; i++) {
        ch = 'A';  // Start character for each row

        // Loop to print characters in each row
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // Move to the next character
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}