#include <stdio.h>

int main()
{
  int ar[100], n, i, j, swap;

  printf("Enter number of elements : ");
  scanf("%d", &n);
  for (i=0; i<n; i++)
  {
  	printf("Enter %d elements : ", i+1);
	scanf("%d", &ar[i]);
  }
  
  for (i=0; i<n-1; i++)
  {
    for (j=0; j<n-i-1; j++)
    {
      if (ar[j] > ar[j+1])
      {
        swap    = ar[j];
        ar[j]   = ar[j+1];
        ar[j+1] = swap;
      }
    }
  }

  printf("Sorted Array is : ");
  for (i=0; i<n; i++)
  {
  	printf("\t%d", ar[i]);
  }

  return 0;
}
