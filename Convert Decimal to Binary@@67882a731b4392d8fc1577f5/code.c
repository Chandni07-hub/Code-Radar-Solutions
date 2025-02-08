#include <stdio.h>

void decimalToBinary(int n) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); // Initialize mask to the highest bit

    for (; mask > 0; mask >>= 1) {
        if (n & mask) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary representation: ");
    decimalToBinary(decimalNumber);

    return 0;
}
