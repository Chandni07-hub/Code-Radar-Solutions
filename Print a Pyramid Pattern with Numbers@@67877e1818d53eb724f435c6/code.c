#include <stdio.h>

int main() {
    int n, i, j, space, num = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        num = 1;  // Reset num for each row
        printf("\n");
    }

    return 0;
}