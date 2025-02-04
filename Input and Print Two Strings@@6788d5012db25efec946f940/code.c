#include <stdio.h>
int main() {
    char a[60];
    char b[50];
    scanf("%59s",a);
    scanf("%49",b);
    printf("You entered: %s and %s\n",a,b);
    return 0;
}