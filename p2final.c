#include<stdio.h>
int input()
{
  int a;
  printf("enter any number :");
  scanf("%d",&a);
  return a;
}
int com(int a,int b,int c)
{
  if(a>b && a>c)
    return a;
  else if(b>a && b>c)
        return b;
       else
        return c;
}
int output(int max)
{
  printf("biggest number is:%d",max);
  return max;
}
int main()
{
  int a,b,c,big;
  a=input();
  b=input();
  c=input();
  big=com(a,b,c);
  output(big);
  return 0;
}