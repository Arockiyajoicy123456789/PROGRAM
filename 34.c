#include<stdio.h>
#include<string.h>
int main()
{
char a[20]="hello world.Good";
int i,count=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
count++;
}
printf("Number of lines %d",count);
}
