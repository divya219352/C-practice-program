//C Program to Print Continuous Character Pattern
#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'A';  // Start with character 'A'

    // Ask user for the number of rows
    printf("Enter the number of rows for the continuous character pattern: ");
    scanf("%d", &rows);

    // Loop through each row
    for(i = 1; i <= rows; i++) {
        // Loop to print characters in each row
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // Move to the next character
            if(ch > 'Z')  // After 'Z', wrap around to 'A'
                ch = 'A';
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
