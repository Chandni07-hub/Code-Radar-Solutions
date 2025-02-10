#include <stdio.h>

int main() {
    int rows;

    // Ask the user to input the number of rows

    scanf("%d", &rows);

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for spaces before the numbers
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Inner loop to print the numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}