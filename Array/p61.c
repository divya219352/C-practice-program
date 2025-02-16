//C Program to Sort the Elements of an Array in Descending Order
#include <stdio.h>

void selectionSortDescending(int array[], int n) {
    // Traverse through all elements in the array
    for (int i = 0; i < n - 1; i++) {
        // Find the index of the maximum element in the unsorted portion of the array
        int maxIndex = i;

        // Traverse the remaining unsorted portion of the array
        for (int j = i + 1; j < n; j++) {
            if (array[j] > array[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap the found maximum element with the first element of the unsorted portion
        if (maxIndex != i) {
            int temp = array[i];
            array[i] = array[maxIndex];
            array[maxIndex] = temp;
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

    // Perform selection sort to sort in descending order
    selectionSortDescending(array, n);

    // Output the sorted array in descending order
    printf("The array sorted in descending order is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
