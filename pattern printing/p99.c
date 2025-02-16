//C Program to Print Hollow Star Pyramid in a Diamond Shape
#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows (for half of the diamond)
    printf("Enter the number of rows for the hollow star diamond: ");
    scanf("%d", &rows);

    // Print the top half of the diamond (hollow star pyramid)
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(j = 1; j <= (rows - i); j++) {
            printf(" ");
        }

        // Print stars and hollow spaces for the current row
        for(j = 1; j <= (2 * i - 1); j++) {
            // Print star at the boundary or the first/last element in the row
            if(j == 1 || j == (2 * i - 1) || i == rows) {
                printf("*");
            } else {
                printf(" ");  // Print space for the hollow part
            }
        }

        // Move to the next line after each row
        printf("\n");
    }

    // Print the bottom half of the diamond (inverted hollow star pyramid)
    for(i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for(j = 1; j <= (rows - i); j++) {
            printf(" ");
        }

        // Print stars and hollow spaces for the current row
        for(j = 1; j <= (2 * i - 1); j++) {
            // Print star at the boundary or the first/last element in the row
            if(j == 1 || j == (2 * i - 1) || i == 1) {
                printf("*");
            } else {
                printf(" ");  // Print space for the hollow part
            }
        }

        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
