#include <stdio.h>

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = n - i; space > 0; space--) {
            printf(" ");
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n = 2; // Change this value to adjust the height of the pyramid
    pyramid(n);
    return 0;
}
