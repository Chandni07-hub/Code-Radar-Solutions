#include <stdio.h>

void printNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printNumberTriangle(n);
    return 0;
}