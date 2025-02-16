//C Program to Sort a 2D Array of Strings
#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the strings using strcmp
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings using temporary variable
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    char arr[5][100] = {
        "Banana",
        "Apple",
        "Grape",
        "Orange",
        "Mango"
    };
    
    int n = 5;  // Number of strings in the array
    
    printf("Original array of strings:\n");
    printArray(arr, n);
    
    bubbleSort(arr, n);  // Sort the array of strings
    
    printf("\nSorted array of strings:\n");
    printArray(arr, n);  // Print the sorted array
    
    return 0;
}
