#include<stdio.h>
int main()
{
int n,i;
printf("Enter the nuber:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if((n%i)==0)
{
break;
}
}
if(n!=i)
{
printf("Yes");
}
else
{
printf("No");
}
}

