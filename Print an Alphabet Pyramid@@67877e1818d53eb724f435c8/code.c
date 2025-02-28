#include <stdio.h>

int main() {
    int n, i, j;
    char ch;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        ch = 'A';  // Reset to 'A' at the beginning of each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}