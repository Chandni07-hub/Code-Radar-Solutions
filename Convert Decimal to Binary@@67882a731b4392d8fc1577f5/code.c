#include <stdio.h>

// Function to convert decimal to binary using recursion
void decimalToBinary(int n) {
    if (n == 0) {
        return;
    } else {
        decimalToBinary(n / 2);  // Recursive call
        printf("%d", n % 2);    // Print remainder
    }
}

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    } else {
        printf("");
        decimalToBinary(n);
    }
    return 0;
}