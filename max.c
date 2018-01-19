#include <stdio.h>
int main()
{
  int array[10], max, n, i;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
  scanf("%d", &array[i]);
  max = array[0];
  for (i = 1; i < n; i++)
  {
   if (array[i] > max)
    {
       max  = array[i];
     }
  }
  printf("Maximum element is %d\n", max);
 
}
        
