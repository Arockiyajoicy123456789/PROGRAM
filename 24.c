#include<stdio.h>
#include<string.h>
void main()
{
    char a[70];
    int i,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=1)||(a[i]<=9))
        {
            count++;
           printf("YES");
           break;
        }
    }
}
    

    
