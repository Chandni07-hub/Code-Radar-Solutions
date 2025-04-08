#include <stdio.h>
#include <string.h>

int reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];

    // Take input from the user
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Remove newline character if it exists
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;