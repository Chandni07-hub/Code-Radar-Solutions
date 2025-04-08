#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char shortest[1000];
    scanf(" %[^\n]", str);  
    int minLen = 1000;
    int i = 0;
    while (str[i] != '\0') {
        char word[1000];
        int j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        // Check if current word is the shortest
        if (strlen(word) < minLen && strlen(word) > 0) {
            minLen = strlen(word);
            strcpy(shortest, word);
        }
        if (str[i] == ' ') {
            i++;
        }
    }
    printf("%s\n", shortest);
    return 0;
}