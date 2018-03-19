#include<stdio.h>
#include<string.h>
void main()
{
  char a[40];
  int i,n;
  scanf("%[^\n]s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]==' ')
    {
      
    }
    else
    {
      printf("%c",a[i]);
    }
  }
  
}
