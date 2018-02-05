#include<stdio.h>
int main()
{
int a=0,b=1,i,temp,n;
printf("Enter the number:");
scanf("%d",&n);
printf("%d",b);
for(i=2;i<=n;i++)
{
temp=a+b;
a=b;
b=temp;
printf("%d",temp);
}
}
