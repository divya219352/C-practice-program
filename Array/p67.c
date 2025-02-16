//C Program to Copy All the Elements of One Array to Another Array
#include <stdio.h>

void copyArray(int source[], int destination[], int n) {
    // Loop to copy each element from the source array to the destination array
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int source[n], destination[n];

    // Input elements into the source array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &source[i]);
    }

    // Call the function to copy elements from source to destination
    copyArray(source, destination, n);

    // Output the source and destination arrays
    printf("Source Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }
    printf("\n");

    printf("Destination Array (after copying): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
