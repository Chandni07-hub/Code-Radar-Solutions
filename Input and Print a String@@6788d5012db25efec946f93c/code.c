#include <stdio.h>



int main() {
    char str[100];
    scanf("%[^\n]%*c",&str);
    printf("You entered: %s",str);
    return 0;
}