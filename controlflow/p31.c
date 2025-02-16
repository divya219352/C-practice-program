//C Program to Display Armstrong Number Between Two Intervals 
#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, num, originalNum, remainder, result, n;

    // Ask the user to enter the interval range
    printf("Enter the lower interval: ");
    scanf("%d", &lower);
    printf("Enter the upper interval: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    // Loop through numbers between the lower and upper interval
    for (num = lower; num <= upper; num++) {
        originalNum = num;
        result = 0;

        // Find the number of digits in the current number
        n = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Calculate the sum of the powers of the digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
