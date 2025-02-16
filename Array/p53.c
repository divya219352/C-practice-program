//C Program to Find the Largest Element in an Array
#include <stdio.h>

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

    // Initialize the largest element as the first element of the array
    int largest = array[0];

    // Traverse the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Output the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
