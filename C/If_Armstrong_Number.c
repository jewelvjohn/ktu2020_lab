#include<stdio.h>

int main()
{
	int num,sum=0,red,i;
	printf("Enter the number : ");
	scanf("%d" ,&num);
	for(i=num ;i>0 ;i=i/10)
	{
		red = i % 10;
        sum += red * red * red;
	}
	if (sum == num)
	{
    	printf("%d is a Armstrong number", num);	
	}
    else
    {
    	printf("%d is not a Armstrong number", num);
	}
        
	return 0;
}
