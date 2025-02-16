//C Program to Calculate the Average of All the Elements Present in an Array 
#include <stdio.h>

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    int sum = 0;

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];  // Add each element to the sum
    }

    // Calculate the average
    double average = (double)sum / n;

    // Output the average
    printf("The average of the elements in the array is: %.2f\n", average);

    return 0;
}
