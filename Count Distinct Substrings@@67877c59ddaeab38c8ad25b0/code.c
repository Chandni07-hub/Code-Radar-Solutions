#include <stdio.h>
#include <string.h>

int isUnique(char substrs[][1000], int count, char *s) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrs[i], s) == 0)
            return 0;
    }
    return 1;
}

int main() {
    char str[1000], substrs[10000][1000];
    int count = 0;
    
    // Read input
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    len = strlen(str);

    // Generate all substrings
    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            char temp[1000];
            strncpy(temp, str + i, j);
            temp[j] = '\0';

            if (isUnique(substrs, count, temp)) {
                strcpy(substrs[count++], temp);
            }
        }
    }
    printf("%d\n", count);
    return 0;
}