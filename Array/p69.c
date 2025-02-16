//C Program to Sort the 2D Array Across Rows
#include <stdio.h>

void sortRow(int array[], int n) {
    // Simple bubble sort to sort a row
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap if elements are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sort2DArray(int array[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        sortRow(array[i], cols);
    }
}

void print2DArray(int array[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    // Input the elements of the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Sort the 2D array across rows
    sort2DArray(array, rows, cols);

    // Output the sorted 2D array
    printf("The 2D array after sorting each row:\n");
    print2DArray(array, rows, cols);

    return 0;
}
