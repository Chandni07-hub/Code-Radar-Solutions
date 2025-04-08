#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to count words in a string
int countWords(const char *str) {
    int count = 0;
    int inWord = 0; // Flag to track if we are in a word

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (!inWord) {
                count++; // New word found
                inWord = 1;
            }
        } else {
            inWord = 0; // Reset flag when space is found
        }
    }
    return count;
}

int main() {
    char str[200];

  
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = 0;

    printf("%d\n", countWords(str));

    return 0;
}