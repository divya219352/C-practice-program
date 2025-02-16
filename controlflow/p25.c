//C Program to Make a Simple Calculator 
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Ask the user to choose an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c to consume any leading whitespace

    // Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the chosen operator
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
