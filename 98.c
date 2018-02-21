#include<stdio.h>
void main()
{
int a[20],i,n;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter %d values are:",n);
for(i=1;i<=n;i++)
{
  scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
  if(a[i]!=i)
  {
    printf("changed number is:%d",i);
    break;
  }
}
}


