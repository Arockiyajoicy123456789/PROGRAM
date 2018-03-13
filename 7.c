#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int i;
printf("Enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(i%2==0)
{
printf("%c%c",a[i+1],a[i]);
}
}
}
