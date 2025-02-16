//C Program to Find the Determinant of a Matrix
#include <stdio.h>

#define MAX_SIZE 10

// Function to get the cofactor of the matrix
void getCofactor(int matrix[][MAX_SIZE], int temp[][MAX_SIZE], int p, int q, int n) {
    int i = 0, j = 0;

    // Loop through the matrix and get the cofactor matrix
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            // Skip the row p and column q
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];

                // If we reach the end of a column, reset and move to the next row
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Function to find the determinant of a matrix
int determinant(int matrix[][MAX_SIZE], int n) {
    int det = 0;
    if (n == 1) {
        return matrix[0][0];  // Base case for 1x1 matrix
    }

    int temp[MAX_SIZE][MAX_SIZE];

    // Loop for cofactor expansion along the first row
    for (int f = 0; f < n; f++) {
        getCofactor(matrix, temp, 0, f, n);
        det += (f % 2 == 0 ? 1 : -1) * matrix[0][f] * determinant(temp, n - 1);
    }

    return det;
}

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    // Input elements into the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Matrix must be square for determinant calculation
    if (rows != cols) {
        printf("Matrix must be square to calculate the determinant.\n");
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    // Input matrix elements
    inputMatrix(matrix, rows, cols);

    // Calculate the determinant
    int det = determinant(matrix, rows);

    // Output the determinant
    printf("The determinant of the matrix is: %d\n", det);

    return 0;
}
