//C Program to Check Whether Two Matrices Are Equal or Not 
#include <stdio.h>

int areMatricesEqual(int matrix1[][100], int matrix2[][100], int rows, int cols) {
    // Compare corresponding elements of both matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return 0; // Matrices are not equal
            }
        }
    }
    return 1; // Matrices are equal
}

int main() {
    int rows, cols;

    // Input the number of rows and columns for both matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check whether the matrices are equal or not
    if (areMatricesEqual(matrix1, matrix2, rows, cols)) {
        printf("The matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }

    return 0;
}
