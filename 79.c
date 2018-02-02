#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter two values:");
scanf("%d %d",&a,&b);
c=a*b;
if(c==(a*a)&&c==(b*b))
{
printf("YES");
}
else
{
printf("NO");
}
}
