#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n",__builtin_clz(a));
    return 0;
}