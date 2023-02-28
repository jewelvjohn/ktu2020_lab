#include<stdio.h>

int fact(int num);
int main()
{
  int num, res, i;
  printf("\nEnter the number : ");
  scanf("%d" ,&num);
  res=fact(num);
  printf("\nThe Factorial of %d is = %d" ,num ,res);

  return 0;
}

int fact(int num)
{
  int j;
  if(num == 0 || num == 1)
  {
    j=1;
  }
  else
  {
    j = num*fact(num-1);
  }

  return j;
}
