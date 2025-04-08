// Your code here...
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Convert each character
    while (str[i] != '\0') {
        // If character is lowercase (a-z), convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }

    // Output result
    printf("%s", str);

    return 0;
}