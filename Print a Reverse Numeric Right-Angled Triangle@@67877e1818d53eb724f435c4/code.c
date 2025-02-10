#include <stdio.h>

int main() {
    int rows;

    // Ask the user to input the number of rows
    scanf("%d", &rows);

    // Outer loop for each row
    for (int i = rows; i >= 1; i--) {
        // Inner loop to print numbers in reverse order up to the current row number
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}