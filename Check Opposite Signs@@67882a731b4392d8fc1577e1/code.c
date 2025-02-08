#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // Use a comma to separate the format string and the variable addresses
    if ((a ^ b) < 0) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
