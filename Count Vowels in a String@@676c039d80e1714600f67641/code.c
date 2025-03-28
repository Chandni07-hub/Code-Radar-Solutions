// Your code here...
#include <stdio.h>
#include <string.h>

// Function declaration
int countVowels(const char *str);

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = 0; 

    printf("%d\n", countVowels(str));

    return 0;
}

// Function to count vowels
int countVowels(const char *str) {
    int count = 0;
    char vowels[] = "aeiouAEIOU";

    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr(vowels, str[i])) { // Check if character is a vowel
            count++;
        }
    }
    return count;
}