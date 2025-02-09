#include <stdio.h>

void reverseAlphabetTriangle(int n) {
    char c;
    for (int i = n; i >= 1; i--) {
        c = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // Change this value to adjust the height of the triangle
    reverseAlphabetTriangle(n);
    return 0;
}
