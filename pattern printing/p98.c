//C Program to Print Inverted Hollow Star pyramid 
#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows for the inverted hollow star pyramid: ");
    scanf("%d", &rows);

    // Loop through each row (starting from the topmost row to the bottom)
    for(i = rows; i >= 1; i--) {
        // Loop to print leading spaces
        for(j = 1; j <= (rows - i); j++) {
            printf(" ");
        }

        // Loop to print stars and spaces for the hollow part
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

    return 0;
}
