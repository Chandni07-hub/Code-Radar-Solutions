#include <stdio.h>
#include <string.h>
#define MAX 256
char firstNonRepeatedChar(char *str) {
    int count[MAX] = {0};
    int i;
    // Count occurrences of each character
    for (i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }
    // Find the first non-repeating character
    for (i = 0; str[i]; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    return '-';  // If no non-repeating character exists
}
int main() {
    char str[1000];
    scanf("%s", str);
    char result = firstNonRepeatedChar(str);
    printf("%c\n", result);
    return 0;
}