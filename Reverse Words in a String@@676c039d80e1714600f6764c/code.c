#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  // Read input string

    char *word_start = NULL;
    char *temp = str;

    while (*temp) {
        if ((word_start == NULL) && (!isspace(*temp))) {
            word_start = temp;
        }

        if (word_start && (isspace(*temp) || *(temp + 1) == '\0')) {
            char *word_end = (isspace(*temp)) ? temp - 1 : temp;
            reverseWord(word_start, word_end);
            word_start = NULL;
        }

        temp++;
    }

    printf("%s", str);
    return 0;
}