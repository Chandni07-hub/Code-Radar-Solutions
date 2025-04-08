// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isBinaryString(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return false; // If any character is not '0' or '1', return false
        }
    }
    return true; // All characters are '0' or '1'
}

int main() {
    char str[100];
    printf("");
    scanf("%s", str);

    if (isBinaryString(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}