//C Program to Sort an Array using Pointers
#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            // Swap elements if they are in the wrong order
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap using pointer dereferencing
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);  // Sort the array using Bubble Sort

    printf("\nSorted array: \n");
    printArray(arr, n);  // Print the sorted array

    return 0;
}
