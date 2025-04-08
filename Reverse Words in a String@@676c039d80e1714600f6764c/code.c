#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    char *word_start = str;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(word_start, &str[i - 1]);
            if (str[i] == '\0')
                break;
            word_start = &str[i + 1];
        }
    }
    printf("%s\n", str);
    return 0;
}