#include <stdio.h>
int main()
{
	int n1,n2,temp;
	printf("Enter the values:");
	scanf("%d %d",&n1,&n2);
	printf("The values are before swapping:%d %d\n",n1,n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("After swapping the values are:%d %d",n1,n2);
}
