#include <stdio.h>
void main()
{
    int a[10],n;
    printf("enter the number:");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]/2);
        }
       else
        {
        printf("%d",a[i]);
        }
    
    }
}
    
