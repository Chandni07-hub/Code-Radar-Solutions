#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256

int areAnagrams(char str1[], char str2[]) {
    int count[CHAR_RANGE] = {0};
    int i;

    // If lengths are not equal, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Count frequency of each character
    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // If all counts are zero, they are anagrams
    for (i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check and print result
    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}