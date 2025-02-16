//C Program to Print Floyd’s Pattern Triangle Pyramid 
#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    // Ask user for the number of rows
    printf("Enter the number of rows for Floyd's Triangle Pyramid: ");
    scanf("%d", &rows);

    // Loop through each row to print Floyd's Triangle
    for(i = 1; i <= rows; i++) {
        // Loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment the number for the next position
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
