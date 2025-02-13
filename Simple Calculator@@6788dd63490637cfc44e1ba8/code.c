#include <stdio.h>

// Function to perform the calculation
double calculate(double num1, double num2, char operator) {
    double result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 0;
    }
    return result;
}

int main() {
    double num1, num2;
    char operator;

    // First calculation: 5 + 3
    num1 = 5;
    operator = '+';
    num2 = 3;
    printf("Result of %.2lf %c %.2lf: %.2lf\n", num1, operator, num2, calculate(num1, num2, operator)); // Output: 8

    // Second calculation: 10 / 2
    num1 = 10;
    operator = '/';
    num2 = 2;
    printf("Result of %.2lf %c %.2lf: %.2lf\n", num1, operator, num2, calculate(num1, num2, operator)); // Output: 5

    return 0;
}
