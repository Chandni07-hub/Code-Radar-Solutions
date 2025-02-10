#include <stdio.h>

void printHollowSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print star for the boundary of the square
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                // Print space for the inner part of the square
                printf(" ");
            }
        }
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printHollowSquare(n);
    return 0;
}