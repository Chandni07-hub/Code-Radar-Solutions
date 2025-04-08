#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void concatenate(char *result, const char *str1, const char *str2) {
    int i = 0, j = 0;

    // Copy first string to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null terminate the concatenated string
    result[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    // Read two lines of input
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline characters if present
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    // Concatenate strings
    concatenate(result, str1, str2);

    // Print concatenated result
    printf("%s\n", result);

    return 0;
}