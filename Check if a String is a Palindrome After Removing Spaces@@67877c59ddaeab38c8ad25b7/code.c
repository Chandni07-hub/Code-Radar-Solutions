#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    char cleaned[1000];
    int j = 0;

    // Remove spaces and convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    // Check if cleaned string is a palindrome
    int left = 0;
    int right = j - 1;
    while (left < right) {
        if (cleaned[left++] != cleaned[right--]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char input[1000];

    // Read the full line including spaces
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove newline

    if (isPalindrome(input)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}