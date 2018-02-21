#include<stdio.h>
void main()
{
int a[20],n,i,product=1;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter %d values:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
product=product*a[i];
}
printf("%d",product);
}
