//C Program to Print Simple Pyramid Pattern 
#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Ask user for the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Loop through each row
    for(i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for(space = 1; space <= (rows - i); space++) {
            printf(" ");
        }

        // Print stars for the current row
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
