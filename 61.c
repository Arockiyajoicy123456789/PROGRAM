#include<stdio.h>
void main()
{
  char str[20];
  int n,i;
  printf("Enter the string and number:");
  scanf("%s %d",&str,&n);
  for(i=0;i<n;i++)
  {
    printf("%c",str[i]);
    }
  
}
