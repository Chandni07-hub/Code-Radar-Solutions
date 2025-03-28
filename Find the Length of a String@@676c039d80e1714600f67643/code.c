#include <stdio.h>

// Function to calculate the length of a string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];


    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if present
    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }

    printf("%d\n", stringLength(str));

    return 0;
}