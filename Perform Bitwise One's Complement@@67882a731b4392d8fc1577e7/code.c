#include <stdio.h>

int main() {
    int num, result;

    scanf("%d", &num);
    result = ~num;
    printf("Bitwise One's Complement of %d is %d\n", num, result);

    return 0;
}
