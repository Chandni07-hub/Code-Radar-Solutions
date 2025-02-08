#include <stdio.h>

int main() {
    int num, result;

    // Asking the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Performing bitwise one's complement operation
    result = ~num;

    // Printing the result
    printf("Bitwise One's Complement of %d is %d\n", num, result);

    return 0;
}
