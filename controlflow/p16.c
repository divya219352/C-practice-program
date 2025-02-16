//C Program to Check Whether a Number is Positive, Negative, or Zero
#include <stdio.h>

int main() {
    int num;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
