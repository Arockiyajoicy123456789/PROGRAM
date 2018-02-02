#include <stdio.h>
#include<string.h>
int main()
{
    char c[20]="HELLO WORLD";
    int i;
    int count=0;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' ')
    
        count++;
    }
    printf("%d",count+1);
}
