//C Program to Find the Maximum and Minimum in an Array
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

    // Initialize maximum and minimum as the first element of the array
    int max = array[0];
    int min = array[0];

    // Traverse the array to find the maximum and minimum elements
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    // Output the maximum and minimum elements
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
