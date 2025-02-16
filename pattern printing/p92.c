//C Program to Print 1800 Rotation of Simple Pyramid
#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Ask user for the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Loop through each row (in reverse order)
    for(i = rows; i >= 1; i--) {
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
