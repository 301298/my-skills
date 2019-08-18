#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=2;n>1;i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            n=n/i;
            count++;
        }
    }
    printf("\nNo of prime factor is:%d",count);
}
