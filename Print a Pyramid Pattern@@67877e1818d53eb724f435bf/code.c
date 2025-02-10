#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    printPyramid(n);
    return 0;
}