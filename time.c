#include<stdio.h>
int main()
{
int time=0;
int min=0;
int hour=0;
time=52;
min=time%60;
hour=(time-min)/60;
printf("%d hour %d min",hour,min);
}
