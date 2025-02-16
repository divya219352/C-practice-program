//How to Declare a Two-Dimensional Array of Pointers in C?
#include <stdio.h>

int main() {
    int *arr[3][4];  // 2D array of pointers (3 rows, 4 columns)
    
    // Dynamically allocate memory for each row and column
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = (int *)malloc(sizeof(int));  // Allocate memory for each integer
            if (arr[i][j] == NULL) {
                printf("Memory allocation failed!\n");
                return -1;
            }
            *arr[i][j] = i * j;  // Assign a value to the dynamically allocated integer
        }
    }

    // Print values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d\n", i, j, *arr[i][j]);
        }
    }

    // Free dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            free(arr[i][j]);
        }
    }

    return 0;
}
