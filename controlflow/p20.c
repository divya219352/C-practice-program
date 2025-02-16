///C Program to Find Largest Number Among Three Numbers
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Ask the user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the three numbers to find the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}
