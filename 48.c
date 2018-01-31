#include<stdio.h>
int main()
{
int n,a[10],i;
printf("Enter the number:");
scanf("%d",&n);
printf("Enter %d values:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
n=(n+1)/2;
printf("Average value is %d:",n);
}





