//C Program to Find the Largest Element in an Array using Pointers
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};  // Example array
    int *ptr = arr;  // Pointer to the array
    int largest = *ptr;  // Initialize the largest element to the first element of the array
    
    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Traverse through the array using the pointer
    for (int i = 1; i < n; i++) {
        ptr++;  // Move the pointer to the next element in the array
        if (*ptr > largest) {
            largest = *ptr;  // Update largest if the current element is greater
        }
    }

    // Print the largest element found
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
