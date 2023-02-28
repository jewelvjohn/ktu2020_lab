#include<stdio.h>

int main()
{
	int n,Array[40],i,sum=0,average=0;
	
	printf("Enter The number of elements : ");
	scanf("%d", &n);
	printf("Enter the %d elements of the array : " ,n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", &Array[i]);
		sum=sum+Array[i];
	}
	
	average=sum/n;
	
	printf("The Sum of numbers is : %d" ,sum);
	printf("\nThe Average of numbers is : %d" ,average);
	
	return 0;	
}
