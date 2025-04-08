#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Read the character to count
    scanf(" %c", &ch);

    // Count occurrences of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}