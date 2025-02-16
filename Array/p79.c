//C Program to Interchange Elements of First and Last in a Matrix Across Rows 
#include <stdio.h>

#define MAX_SIZE 10

// Function to input a matrix
void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to interchange first and last elements of each row
void interchangeFirstLast(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        // Interchange the first and last elements in the row
        if (cols > 1) { // Ensure there are at least two elements in the row
            int temp = matrix[i][0];
            matrix[i][0] = matrix[i][cols - 1];
            matrix[i][cols - 1] = temp;
        }
    }
}

// Function to display the matrix
void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[MAX_SIZE][MAX_SIZE];

    // Input elements for the matrix
    inputMatrix(matrix, rows, cols);

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, cols);

    // Interchange first and last elements in each row
    interchangeFirstLast(matrix, rows, cols);

    // Display the matrix after interchanging
    printf("\nMatrix after interchanging first and last elements in each row:\n");
    displayMatrix(matrix, rows, cols);

    return 0;
}
