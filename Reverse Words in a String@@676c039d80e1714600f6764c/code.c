#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], words[20][20];
    int i = 0, j = 0, k = 0, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Split string into words manually
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            words[wordCount][j] = '\0'; // end current word
            wordCount++;
            j = 0; // reset letter index

