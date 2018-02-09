#include <stdio.h>
int main()
{
  int n,temp;
  scanf("%d",&n);
  while(n!=0)
  {
    temp=n%10;
    if((n%2)!=0)
    {
      printf("%d\t",temp);
    }
    n=n/10;
  }
}
