#include <stdio.h>

void decimalToBinary(int n) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); /

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
    scanf("%d", &decimalNumber);

    printf("Binary representation: ");
    decimalToBinary(decimalNumber);

    return 0;
}
