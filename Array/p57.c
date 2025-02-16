//C Program to Sort an Array using Bubble Sort
#include <stdio.h>

void bubbleSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Flag to check if any swapping is done
        int swapped = 0;

        // Perform bubble sort for each pass
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (array[j] > array[j + 1]) {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1; // Set swapped flag
            }
        }

        // If no two elements were swapped in the inner loop, then the array is sorted
        if (swapped == 0) {
            break;
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

    // Perform bubble sort
    bubbleSort(array, n);

    // Output the sorted array
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
