//C Program to Rotate Matrix Elements 
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

// Function to rotate matrix elements in a clockwise direction
void rotateMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    int temp[MAX_SIZE][MAX_SIZE];

    // Copy the boundary elements to a temporary matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[i][j] = matrix[i][j];
        }
    }

    // Move top row elements to right
    for (int j = 1; j < cols; j++) {
        matrix[0][j] = temp[0][j - 1];
    }

    // Move rightmost column elements down
    for (int i = 1; i < rows; i++) {
        matrix[i][cols - 1] = temp[i - 1][cols - 1];
    }

    // Move bottom row elements to left
    for (int j = cols - 2; j >= 0; j--) {
        matrix[rows - 1][j] = temp[rows - 1][j + 1];
    }

    // Move leftmost column elements up
    for (int i = rows - 2; i >= 0; i--) {
        matrix[i][0] = temp[i + 1][0];
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

    // Rotate the matrix elements
    rotateMatrix(matrix, rows, cols);

    // Display the rotated matrix
    printf("\nMatrix after rotation:\n");
    displayMatrix(matrix, rows, cols);

    return 0;
}
