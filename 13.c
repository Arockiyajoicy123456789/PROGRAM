#include<stdio.h>
void main()
{
  int n,n1,n2,n3;
  scanf("%d",&n);
  n1=n%10;
  n2=n/10;
  n3=(n2*n2)+(n1*n1);
  printf("%d",n3);
}
