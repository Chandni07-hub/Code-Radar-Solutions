// Your code here...
#include <stdio.h>
#include <string.h>
int countVowels(const char *str);
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    printf("%d\n", countVowels(str));
    return 0;
}
int countVowels(const char *str) {
    int count = 0;
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr(vowels, str[i])) { 
            count++;
        }
    }
    return count;
}