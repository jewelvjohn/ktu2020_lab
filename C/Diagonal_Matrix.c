#include <stdio.h>
int main()
{
	int ar[50][50],i,j,n,flag=0;
	printf("Enter the order of the square matrix : ");
	scanf("%d" ,&n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter the (%d,%d) element : " ,i+1 ,j+1);
			scanf("%d" ,&ar[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if (i!=j && ar[i][j]!=0)
			{
				flag=1;
				printf("\nThe matrix is not a diagonal matrix");
				break;
			}
		}
		if (flag==1)
		{
			break;
		}
	}
	if (flag==0)
	{
		printf("\nThe matrix is a diagonal matrix");
	}
	return 0;
}
