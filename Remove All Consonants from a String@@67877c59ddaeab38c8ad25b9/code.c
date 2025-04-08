// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeConsonants(char *str) {
    int j = 0; // Index to store the modified string
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (isalpha(c)) {
            // Check if the character is a vowel (case insensitive)
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || 
                tolower(c) == 'o' || tolower(c) == 'u') {
                str[j++] = c;
            }
        } else {
            // Include non-alphabetic characters as-is
            str[j++] = c;
        }
    }
    str[j] = '\0'; // Terminate the modified string
}

int main() {
    char str[100];
    printf("");
    fgets(str, sizeof(str), stdin); // Use fgets to read input with spaces
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    removeConsonants(str);
    printf("%s\n", str);

    return 0;
}