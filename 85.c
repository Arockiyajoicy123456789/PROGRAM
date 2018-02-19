#include<stdio.h>
#include<string.h>
void main()
{
  char a[60];
  scanf("%s",a);
  int i;
  for(i=0;a[i]!='\0';i++)
  {
    if(i%2==0)
    {
    printf("%c",a[i]);
    }
  }

printf(" ");  
  for(i=0;a[i]!='\0';i++)
  {
    if(i%2!=0)
    {
      printf("%c",a[i]);
    }
  }

  
}
