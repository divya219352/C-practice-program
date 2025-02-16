//C Program to Remove Duplicate Elements From a Sorted Array
#include <stdio.h>

int removeDuplicates(int array[], int n) {
    // If the array is empty or has only one element, no duplicates
    if (n == 0 || n == 1) {
        return n;
    }

    // Initialize the index for unique elements
    int uniqueIndex = 1;

    // Traverse the array starting from the second element
    for (int i = 1; i < n; i++) {
        // Check if the current element is not the same as the previous element
        if (array[i] != array[i - 1]) {
            // If it's unique, place it in the next position of the unique part of the array
            array[uniqueIndex] = array[i];
            uniqueIndex++;
        }
    }

    return uniqueIndex; // Return the length of the array without duplicates
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Input elements into the array
    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Remove duplicates from the sorted array
    int newSize = removeDuplicates(array, n);

    // Output the array without duplicates
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
