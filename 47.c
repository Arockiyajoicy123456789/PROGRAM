#include<stdio.h>
int main()
{
int a[10],n,i,max,min;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter the %d values:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
max=a[0],min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
    max=a[i];
}

if(a[i]<max)
{
    min=a[i];
}
printf("maximum element is:%d",max);
printf("minimum element is:%d",min);
}
}





