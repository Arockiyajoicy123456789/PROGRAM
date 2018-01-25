#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the two values:");
    scanf("%d %d",&a,&b);
    if((a<n)&&(n<b))
    {
        printf("YES");
        
    }
    else
    {
        printf("NO");
    }
}
    
