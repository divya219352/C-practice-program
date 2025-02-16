//C Program to Search an Element in an Array (Binary search)
#include <stdio.h>

int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at the middle
        if (array[mid] == target) {
            return mid;  // Element found
        }

        // If target is greater, ignore the left half
        if (array[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1;  // Element not found
}

int main() {
    int n, target;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Input elements into the array (Array must be sorted)
    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(array, n, target);

    if (result == -1) {
        printf("Element %d not found in the array.\n", target);
    } else {
        printf("Element %d found at index %d.\n", target, result);
    }

    return 0;
}
