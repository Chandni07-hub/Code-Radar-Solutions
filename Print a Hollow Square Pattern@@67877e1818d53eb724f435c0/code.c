#include <stdio.h>

void printMirroredTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printMirroredTriangle(n);
    return 0;
}