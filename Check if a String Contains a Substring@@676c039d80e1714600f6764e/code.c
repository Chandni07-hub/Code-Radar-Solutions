#include <stdio.h>
#include <string.h>
int main() {
    char mainStr[1000], subStr[1000];
    // Read the main string
    fgets(mainStr, sizeof(mainStr), stdin);
    // Read the substring to search for
    fgets(subStr, sizeof(subStr), stdin);
    // Remove newline characters if present
    mainStr[strcspn(mainStr, "\n")] = '\0';
    subStr[strcspn(subStr, "\n")] = '\0';
    // Check for substring
    if (strstr(mainStr, subStr) != NULL)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}