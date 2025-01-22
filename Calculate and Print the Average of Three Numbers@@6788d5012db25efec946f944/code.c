#include <stdio.h>
int main()
{
int a,b,c;
printf("enter the value a,b,c:");
scanf("%d %d %d", &a, &b, &c);
printf("\n enter values of : %d %d %d ", a,b,c);
float f = (a+b+c)/3;
printf("Average of three numbers %.2f",f);
    return 0;
}