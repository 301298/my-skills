#include<stdio.h>
int main()
{
    char arr[] = {1, 2, 3,4};
    char *p = arr;
    printf(" %d ", sizeof(p));
    printf(" %d ", sizeof(arr));
    getchar();
}
