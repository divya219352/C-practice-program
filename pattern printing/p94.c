//C Program to Print Number Pattern
#include <stdio.h>

int main() {
    int rows, i, j, num;

    // Ask user for the number of rows
    printf("Enter the number of rows for the number pattern: ");
    scanf("%d", &rows);

    // Loop through each row
    for(i = 1; i <= rows; i++) {
        num = i;  // Start number for each row
        // Loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment number
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
