//C Program to Remove All Occurrences of an Element in an Array 
#include <stdio.h>

int removeOccurrences(int array[], int n, int element) {
    int i, j = 0;

    // Traverse through the array
    for (i = 0; i < n; i++) {
        // If the current element is not the element to remove, move it to the new position
        if (array[i] != element) {
            array[j++] = array[i];
        }
    }

    // Return the new size of the array after removing the occurrences
    return j;
}

int main() {
    int n, element;

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

    // Input the element to remove
    printf("Enter the element to remove: ");
    scanf("%d", &element);

    // Remove all occurrences of the element from the array
    int newSize = removeOccurrences(array, n, element);

    // Output the new array after removal
    printf("Array after removing all occurrences of %d:\n", element);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
