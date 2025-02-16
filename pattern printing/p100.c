//C Program to Print Full Diamond Shape Pyramid
#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows (for half of the diamond)
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &rows);

    // Print the top half of the diamond (pyramid)
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(j = 1; j <= (rows - i); j++) {
            printf(" ");
        }

        // Print stars for the current row
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    // Print the bottom half of the diamond (inverted pyramid)
    for(i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for(j = 1; j <= (rows - i); j++) {
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
