#include<stdio.h>

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6};
  int *ptr = (int*)(&a);
  printf("%d,%d ",&a,*(ptr ));
  getchar();
  return 0;
}

