#include <stdio.h>
#include <string.h>
// Function to reverse characters in a word
void reverseWord(char *start, char *end) {
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[1000];

    // Read the full input line
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Remove newline character
    }

    char *word_start = NULL;
    char *temp = str;
    while(*temp) {
        if((word_start == NULL) && (*temp != ' ')) {
            word_start = temp;
        }
        if(word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverseWord(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
    printf("%s\n", str);
    return 0;
}