//C Program to Generate Multiplication Table
#include <stdio.h>

int main() {
    int num, i;

    // Ask the user for input
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);

    // Generate the multiplication table for the given number
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
