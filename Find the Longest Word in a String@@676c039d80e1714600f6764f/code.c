#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
        if (str[i] == '\0')
            break;
    }
    for (int i = 0; i < maxLen; i++) {
        putchar(str[maxStart + i]);
    }
    printf("\n");
    return 0;
}