#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    char *words[100];
    int count = 0;

    // Split the string into words
    char *token = strtok(str, " \n");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " \n");
    }

    // Print words in reverse order
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[1000];

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Reverse words
    reverseWords(str);

    return 0;
}
