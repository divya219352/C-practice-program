//C Program to Merge Two Arrays 
#include <stdio.h>

void mergeArrays(int array1[], int n1, int array2[], int n2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays into mergedArray
    while (i < n1 && j < n2) {
        mergedArray[k++] = array1[i++];
        mergedArray[k++] = array2[j++];
    }

    // If there are remaining elements in array1
    while (i < n1) {
        mergedArray[k++] = array1[i++];
    }

    // If there are remaining elements in array2
    while (j < n2) {
        mergedArray[k++] = array2[j++];
    }
}

int main() {
    int n1, n2;

    // Input the number of elements for the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int array1[n1];

    // Input elements into the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Input the number of elements for the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int array2[n2];

    // Input elements into the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Create a merged array to store the result
    int mergedArray[n1 + n2];

    // Merge the two arrays
    mergeArrays(array1, n1, array2, n2, mergedArray);

    // Output the merged array
    printf("The merged array is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
