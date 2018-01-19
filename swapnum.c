#include<stdio.h>
int main()
{
int c,d,e;
printf("Enter the values:");
scanf("%d %d",&c,&d);
printf("Before swapping the values are:%d %d\n",c,d);
e=c;
c=d;
d=e;
printf("After swapping the values are:%d %d",c,d);
}
