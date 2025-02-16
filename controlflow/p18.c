//C Program to Check Whether Number is Even or Odd
#include <stdio.h>

int main() {
    int num;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
