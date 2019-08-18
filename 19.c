#include <stdlib.h>
#include <stdio.h>
int main()
{
     static int i=3;
    printf("%d ",--i);
    if(i){
        main();
        printf("\n%d ",i);
    }
}
