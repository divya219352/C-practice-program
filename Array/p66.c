//C Program to Find Common Array Elements  
#include <stdio.h>

void findCommonElements(int array1[], int n1, int array2[], int n2) {
    int found = 0;

    // Traverse through the first array
    for (int i = 0; i < n1; i++) {
        // For each element of the first array, check if it exists in the second array
        for (int j = 0; j < n2; j++) {
            if (array1[i] == array2[j]) {
                printf("%d ", array1[i]);
                found = 1;
                break; // Element found, no need to check further in the second array
            }
        }
    }

    if (!found) {
        printf("No common elements found.");
    }
    printf("\n");
}

int main() {
    int n1, n2;

    // Input the number of elements in the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int array1[n1];

    // Input elements into the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Input the number of elements in the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int array2[n2];

    // Input elements into the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Find and print common elements between the two arrays
    printf("The common elements are: ");
    findCommonElements(array1, n1, array2, n2);

    return 0;
}
