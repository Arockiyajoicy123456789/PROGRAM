#include<stdio.h>
int main()
{
    int a,b;
    printf("Befor swapping the values are:");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping the values are:%d %d",a,b);
}
