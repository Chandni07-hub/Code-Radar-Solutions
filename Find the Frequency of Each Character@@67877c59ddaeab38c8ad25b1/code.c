#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};
    int printed[256] = {0}; // To check if character is already printed
    int i;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Count frequencies
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            freq[(unsigned char)str[i]]++;
        }
    }

    // Print characters in the order they appear
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != '\n' && !printed[ch]) {
            printf("%c: %d\n", ch, freq[ch]);
            printed[ch] = 1;
        }
    }

    return 0;
}