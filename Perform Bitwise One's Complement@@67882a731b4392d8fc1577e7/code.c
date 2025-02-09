#include <stdio.h>

int main() {
    int num, result;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Perform bitwise one's complement
    result = ~num;

    // Print the result
    printf("The bitwise one's complement of %d is: %d\n", num, result);

    return 0;
}

