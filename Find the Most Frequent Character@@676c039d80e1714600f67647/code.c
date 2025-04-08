#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    scanf("%[^\n]%*c", str); // Read the entire line including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    int maxFreq = 0;
    char result = 'z' + 1;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = 'a' + i;
        } else if (freq[i] == maxFreq && ('a' + i) < result) {
            result = 'a' + i;
        }
    }

    printf("%c\n", result);
    return 0;
}





