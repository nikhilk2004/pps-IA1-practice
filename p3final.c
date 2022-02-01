#include<stdio.h>
int input()
{
  int n;
  printf("enter any number :");
  scanf("%d",&n);
  return n;
}
int add(int n)
{
  int i,sum=0;
  for(i=0;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
int output(int sum)
{
  printf("sum is :%d",sum);
}  
int main()
{
  int n,sum;
  n=input();
  sum=add(n);
  output(sum);
  return 0;
}