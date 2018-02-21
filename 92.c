#include<stdio.h>
void main()
{
int a[20],n,i,sum=0;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter %d values:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
