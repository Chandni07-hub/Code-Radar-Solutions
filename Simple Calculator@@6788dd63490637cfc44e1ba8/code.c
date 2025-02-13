#include <stdio.h>

// Function to perform the calculation
int calculate(int num1, int num2, char operator) {
    int result;
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
    // First calculation: 5 + 3
    int num1 = 5;
    int num2 = 3;
    char operator = '+';
    int result = calculate(num1, num2, operator);
    printf("%d\n", result); // Output: 8

    // Second calculation: 10 / 2
    num1 = 10;
    num2 = 2;
    operator = '/';
    result = calculate(num1, num2, operator);
    printf("%d\n", result); // Output: 5

    return 0;
}
