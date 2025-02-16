//C Program to Compute the Sum of Diagonals of a Matrix 
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

// Function to compute the sum of the diagonals
void computeDiagonalSum(int matrix[][MAX_SIZE], int rows, int cols) {
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    // Ensure that the matrix is square for both diagonals to exist
    if (rows != cols) {
        printf("Diagonals exist only for square matrices.\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        // For primary diagonal (i == j)
        primaryDiagonalSum += matrix[i][i];

        // For secondary diagonal (i + j == cols - 1)
        secondaryDiagonalSum += matrix[i][cols - i - 1];
    }

    printf("Sum of Primary Diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of Secondary Diagonal: %d\n", secondaryDiagonalSum);
}

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Ensure the matrix is square
    if (rows != cols) {
        printf("Matrix must be square to compute the diagonals.\n");
        return 1; // Exit the program
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    // Input elements for the matrix
    inputMatrix(matrix, rows, cols);

    // Compute and print the sum of the diagonals
    computeDiagonalSum(matrix, rows, cols);

    return 0;
}
