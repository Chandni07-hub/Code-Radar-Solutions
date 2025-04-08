#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (char)a - (char)b;
}

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("No\n");
        return 0;
    }

    qsort(a, strlen(a), sizeof(char), cmp);
    qsort(b, strlen(b), sizeof(char), cmp);

    printf(strcmp(a, b) == 0 ? "Yes\n" : "No\n");
    return 0;
}