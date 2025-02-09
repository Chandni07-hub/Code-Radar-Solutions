#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print numbers in increasing order
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
