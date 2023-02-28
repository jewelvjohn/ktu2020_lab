#include<stdio.h>

int main()
{
	int n,Array[100],i,num,flag = 0;
	
	printf("Enter The number of elements : ");
	scanf("%d", &n);
	printf("Enter the %d elements of the array : " ,n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", &Array[i]);
	}
	
	printf("Enter the element to search : ");
	scanf("%d", &num);
	
	for (i=0; i<n; i++)
	{
		if(num == Array[i])
		{
			printf("The element is found at %d position" ,i+1);
			flag = 1;
		}
	}
	
	if(flag == 0)
    {
	   	printf("The element is not found!");
   	}
	
	return 0;	
}
