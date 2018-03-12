#include<stdio.h>
void main()
{
  int n,k,i;
  scanf("%d%d",&n,&k);
  for(i=1;i<=k;i++)
  {
    if((i%n==0)&&(i%k==0))
    {
      if((i==n)||(i==k))
      {
      printf("%d",i);
      }
      
    }
  }
}

