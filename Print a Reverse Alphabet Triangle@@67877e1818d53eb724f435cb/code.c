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

    return 0;
}
