#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int n,i,j,temp;
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
        }
      }
    }
      printf("%s",a);
  }    
