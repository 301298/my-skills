#include<stdio.h>
int extern x=3;
void main()
{
    printf("%d",x);
    int x=23;
    printf("%d",x);
}
