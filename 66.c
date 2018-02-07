#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
  if((n%i)==0)
  {
    break;
  }
}
  if(n==i)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
}
