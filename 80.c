#include<stdio.h>
int main()
{
int a[10],i;
printf("Enter the number:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if((a[i]%2)!=0)
{
printf("%d",a[i]);
}
}
}
