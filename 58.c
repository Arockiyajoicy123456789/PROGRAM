#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter the values:");
scanf("%d %d",&n1,&n2);
n1=n1^n2;
n2=n1^n2;
n1=n1^n2;
printf("Swapping values are:%d %d",n1,n2);
}
