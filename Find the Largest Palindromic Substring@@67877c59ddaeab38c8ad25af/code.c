#include <stdio.h>
#include <string.h>
// Function to expand around the center and find the longest palindrome
void expandCenter(char *str, int left, int right, int *start, int *maxLen) {
    int len = strlen(str);
    while (left >= 0 && right < len && str[left] == str[right]) {
        if (right - left + 1 > *maxLen) {
            *start = left;
            *maxLen = right - left + 1;
        }
        left--;
        right++;
    }
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    int start = 0, maxLen = 1;
    for (int i = 0; i < strlen(str); i++) {
        expandCenter(str, i, i, &start, &maxLen);       // Odd length
        expandCenter(str, i, i + 1, &start, &maxLen);   // Even length
    }
    for (int i = start; i < start + maxLen; i++) {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}