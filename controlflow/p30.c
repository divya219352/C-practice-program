//C Program to Display Armstrong Numbers Between 1 to 1000 
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result, n;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    // Loop through numbers from 1 to 1000
    for (num = 1; num <= 1000; num++) {
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
