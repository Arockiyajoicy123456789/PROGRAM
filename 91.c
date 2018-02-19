#include<stdio.h>
void main()
{
int l,w,h,surfacearea,volume;
scanf("%d %d %d",&l,&w,&h);
surfacearea=(2*l*h)+(2*l*w)+(2*h*w);
volume=(l*w*h);
printf("Surface area of cuboid is:%d\n",surfacearea);
printf("Volume of ucboid is:%d",volume);
}
