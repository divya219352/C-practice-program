//C Program to Print Reverse Floyd pattern Triangle Pyramid 
#include <stdio.h>

int main() {
    int rows, i, j, num;

    // Ask user for the number of rows
    printf("Enter the number of rows for the reverse Floyd's Triangle Pyramid: ");
    scanf("%d", &rows);

    // Calculate the total number of elements in the triangle
    num = (rows * (rows + 1)) / 2;  // This is the sum of the first 'rows' numbers

    // Loop through each row to print reverse Floyd's Triangle
    for(i = rows; i >= 1; i--) {
        // Loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;  // Decrement the number for the next position
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
