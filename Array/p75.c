//C Program to Multiply Two Matrices
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

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    // Initialize result matrix to 0
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d %d", &rows2, &cols2);

    // Check if the matrices are compatible for multiplication
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Input elements for both matrices
    printf("Enter elements for the first matrix:\n");
    inputMatrix(matrix1, rows1, cols1);

    printf("Enter elements for the second matrix:\n");
    inputMatrix(matrix2, rows2, cols2);

    // Multiply the matrices
    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    // Display the result
    printf("The product of the two matrices is:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
