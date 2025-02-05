#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    printf("%d\n", a=a|(1<<n));
    return 0;
}