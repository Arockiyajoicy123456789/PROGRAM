#include<stdio.h>
void main()
{
int a[20],n,k,i;
printf("Enter the number:");
scanf("%d %d",&n,&k);
printf("Enter %d values:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  if(a[i]==k)
  {
    printf("%d",a[i]);
  }
}

}
