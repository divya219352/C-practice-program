//C Program to Find the Transpose
#include <stdio.h>

void findTranspose(int matrix[][100], int transpose[][100], int rows, int cols) {
    // Iterate over rows and columns to find the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][100], int rows, int cols) {
    // Print the matrix
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

    int matrix[rows][cols], transpose[cols][rows];

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose of the matrix
    findTranspose(matrix, transpose, rows, cols);

    // Output the original matrix
    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    // Output the transposed matrix
    printf("Transpose of the Matrix:\n");
    printMatrix(transpose, cols, rows);

    return 0;
}
