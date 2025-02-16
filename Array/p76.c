//C Program to Print Boundary Elements of a Matrix 
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

// Function to print the boundary elements of a matrix
void printBoundaryElements(int matrix[][MAX_SIZE], int rows, int cols) {
    // Print first row
    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[0][j]);
    }

    // Print last column (excluding the first element already printed)
    for (int i = 1; i < rows; i++) {
        printf("%d ", matrix[i][cols - 1]);
    }

    // Print last row (excluding the last element already printed)
    if (rows > 1) { // To handle a 1xN matrix case
        for (int j = cols - 2; j >= 0; j--) {
            printf("%d ", matrix[rows - 1][j]);
        }
    }

    // Print first column (excluding the first and last elements already printed)
    if (cols > 1) { // To handle an Nx1 matrix case
        for (int i = rows - 2; i > 0; i--) {
            printf("%d ", matrix[i][0]);
        }
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

    // Print the boundary elements
    printf("The boundary elements of the matrix are:\n");
    printBoundaryElements(matrix, rows, cols);

    return 0;
}
