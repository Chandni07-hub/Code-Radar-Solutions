#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *wordStart = NULL;
    char *temp = str;

    while (*temp) {
        if (wordStart == NULL && *temp != ' ') {
            wordStart = temp;
        }

        if (wordStart && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverseWord(wordStart, temp);
            wordStart = NULL;
        }

        temp++;
    }
}

int main() {
    char str[100];


    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

   

    reverseWords(str);

    printf("%s\n", str);

    return 0;
}