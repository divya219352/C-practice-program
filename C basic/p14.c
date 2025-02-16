//C Program to Find Compound Interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest, amount;

    // Input: Read the principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Formula to calculate Compound Interest
    amount = principal * pow((1 + rate / 100), time);  // A = P(1 + r/n)^(nt)
    compoundInterest = amount - principal;  // Compound Interest = A - P

    // Output: Print the Compound Interest and Total Amount
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Amount after %.2f years = %.2f\n", time, amount);

    return 0;
}

