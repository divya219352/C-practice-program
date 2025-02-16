//C Program to Check Whether a Number is Positive, Negative, or Zero
#include <stdio.h>

int main() {
    int num;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
