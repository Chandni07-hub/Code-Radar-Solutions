#include <stdio.h>
int main() {
    char str[1000], result[1000];
    fgets(str, sizeof(str), stdin);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}