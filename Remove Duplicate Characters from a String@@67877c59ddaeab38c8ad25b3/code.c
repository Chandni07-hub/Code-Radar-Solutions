#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], result[1000];
    int seen[256] = {0};
    int index = 0;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    // Process to remove duplicates
    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            result[index++] = str[i];
        }
    }
    result[index] = '\0'; // Null-terminate the result string
    printf("%s\n", result);
    return 0;
}