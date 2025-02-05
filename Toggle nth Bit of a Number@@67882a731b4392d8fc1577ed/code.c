#include <stdio.h>
int main() {
    int a,n;
    scanf("%d",&a, &n);
    printf("%d",n^(1<<n));
    return 0;
}