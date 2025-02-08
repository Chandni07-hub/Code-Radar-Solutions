#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input for the two numbers
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    // Checking if neither of the two numbers is greater than zero
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("Neither of the two numbers is greater than zero.\n");
    } else {
        printf("At least one of the numbers is greater than zero.\n");
    }

    return 0;
}
