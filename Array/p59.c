//C Program to Sort an Array Using Selection Sort 
#include <stdio.h>

void selectionSort(int array[], int n) {
    // Traverse through all elements in the array
    for (int i = 0; i < n - 1; i++) {
        // Find the index of the minimum element in the unsorted portion of the array
        int minIndex = i;

        // Traverse the remaining unsorted portion of the array
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted portion
        if (minIndex != i) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Perform selection sort
    selectionSort(array, n);

    // Output the sorted array
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
