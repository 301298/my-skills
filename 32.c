#include<stdio.h>
int func(int i)
{
  if(i%2) return (i++);
  else return func(func(i-1));
}
int main()
{
      int i;
      func(11);
      printf("%d",i++);
      return 0;
}
