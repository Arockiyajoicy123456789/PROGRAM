#include<stdio.h>
int main()
{
int i,n,m1=1,m2=1,t;
printf("Enter the number:");
scanf("%d",&n);
printf("Fibbonacci series:");
for(i=1;i<=n;++i)
{
printf("%d",m1);
t=m1+m2;
m1=m2;
m2=t;
}
}
