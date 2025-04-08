#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};

    // Read input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    // If no unique character is found
    printf("-\n");
    return 0;
}