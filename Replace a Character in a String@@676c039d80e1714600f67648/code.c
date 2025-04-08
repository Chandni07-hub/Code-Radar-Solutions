#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char to_replace, replacement;

    // Input the string
    scanf("%s", str);

    // Input the character to replace and the replacement character
    scanf(" %c", &to_replace);      // space before %c to skip any newline
    scanf(" %c", &replacement);     // space before %c to skip any newline

    // Replace all occurrences
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == to_replace) {
            str[i] = replacement;
        }
    }

    // Output the modified string
    printf("%s\n", str);

    return 0;
}