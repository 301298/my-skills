#include <stdio.h>
void main()
{

    int i,a[100],n,count=0,j;
    printf("\n Enter the number of element:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n Enter the element:");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=2;a[i]>1;j++)
        {
            while(a[i]%j==0)
            {
                printf("\n%d",j);
                a[i]=a[i]/j;
                count++;
            }
        }
         printf("\n No of prime factor is:%d",count);
    }
}
