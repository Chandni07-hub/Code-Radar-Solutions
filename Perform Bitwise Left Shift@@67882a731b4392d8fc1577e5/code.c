#include <stdio.h>

int main() {
    int number, shift;

    // Input number and the number of positions to shift
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Enter the number of positions to shift left: ");
    scanf("%d", &shift);

    // Perform the bitwise left shift operation
    int result = number << shift;

    // Print the result
    printf("Result after left shift: %d\n", result);

    return 0;
}
