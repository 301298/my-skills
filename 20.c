# include<stdio.h>
# include<stdlib.h>

void fun(int *a)
{
    a = (int*)malloc(sizeof(int));
}

int main()
{
    int *p,a=6;
    fun(p);
    *p =&a;
    printf("%d\n",*p);

    getchar();
    return(0);
}
