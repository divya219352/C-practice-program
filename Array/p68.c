//C Program For Array Rotation 
#include <stdio.h>

void rightRotate(int array[], int n, int d) {
    // Ensure d is within the range of the array size
    d = d % n;
    
    // Create a temporary array to store the rotated array
    int temp[d];

    // Copy the last d elements of the original array into temp
    for (int i = 0; i < d; i++) {
        temp[i] = array[n - d + i];
    }

    // Shift the first n-d elements to the right
    for (int i = n - 1; i >= d; i--) {
        array[i] = array[i - d];
    }

    // Copy the elements from temp back to the front of the array
    for (int i = 0; i < d; i++) {
        array[i] = temp[i];
    }
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n, d;

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

    // Input the number of positions to rotate the array
    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &d);

    // Perform the rotation
    rightRotate(array, n, d);

    // Output the rotated array
    printf("Array after rotation:\n");
    printArray(array, n);

    return 0;
}
