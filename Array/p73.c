//C Program to Find the Normal and Trace 
#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10

// Function to calculate the norm (Frobenius norm) of the matrix
double calculateNorm(int matrix[][MAX_SIZE], int rows, int cols) {
    double norm = 0.0;

    // Sum of squares of all elements in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            norm += matrix[i][j] * matrix[i][j];
        }
    }

    // Taking the square root of the sum
    return sqrt(norm);
}

// Function to calculate the trace of the matrix
int calculateTrace(int matrix[][MAX_SIZE], int rows, int cols) {
    int trace = 0;

    // Sum of diagonal elements
    for (int i = 0; i < rows; i++) {
        trace += matrix[i][i];
    }

    return trace;
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

    // Matrix must be square for trace calculation
    if (rows != cols) {
        printf("Matrix must be square to calculate the trace.\n");
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    // Input matrix elements
    inputMatrix(matrix, rows, cols);

    // Calculate the norm and trace of the matrix
    double norm = calculateNorm(matrix, rows, cols);
    int trace = calculateTrace(matrix, rows, cols);

    // Output the norm and trace of the matrix
    printf("The norm of the matrix is: %.2f\n", norm);
    printf("The trace of the matrix is: %d\n", trace);

    return 0;
}
