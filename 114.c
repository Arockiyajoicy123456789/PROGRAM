#include<stdio.h>
void main()
{
int a[20],i,n,k,count=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
count++;
}
if(count==k)
{
printf("%d",a[i]);
break;
}
}
}
