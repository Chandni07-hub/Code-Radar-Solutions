#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    printf("%d\n",(a>>n)&1);
    return 0;
}
