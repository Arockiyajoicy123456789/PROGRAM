#include<stdio.h>
void main()
{
    int a,b,i,c,count=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<b;i++)
    {
        c=i*i;
        if((c>a)&&(c<b))
        {
            count++;
        }
    }
    printf("%d",count);
}
