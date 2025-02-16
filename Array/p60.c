//C Program to Sort an Array Using Insertion Sort
#include <stdio.h>

void insertionSort(int array[], int n) {
    // Traverse through all elements in the array
    for (int i = 1; i < n; i++) {
        int key = array[i];  // Element to be inserted
        int j = i - 1;

        // Move elements of array[0..i-1] that are greater than the key
        // to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }

        // Insert the key at the correct position
        array[j + 1] = key;
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

    // Perform insertion sort
    insertionSort(array, n);

    // Output the sorted array
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
