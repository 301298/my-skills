#include<stdio.h>
void main()
{
    char *p="pone";
    p++;
    char c=(*p);
    printf("%c\n",c);
    c++;
    p--;
    printf("%c%s",++c,p++);
}
