#include <stdio.h>
void main() 
{
	int n,k,i,a[10],t;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[k-1]);
}
