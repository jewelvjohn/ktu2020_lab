#include <stdio.h>

int main()
{
	int a[50][50],b[50][50],p[50][50],m,n,c,d,i,j,k;
	
	printf("Enter the order of the first matrix : ");
	scanf("%d%d" ,&m ,&n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\nEnter the (%d,%d) element : " ,i+1 ,i+1);
			scanf("%d" ,&a[i][j]);
		}
	}
	printf("\nEnter the order of the second matrix : ");
	scanf("%d%d" ,&c ,&d);
	
	if(n!=c)
	{
		printf("/nThese Matrices cannot be multiplied");
	}
	else
	{
		for(i=0; i<m; i++)
		{
			for(j=0; j<d; j++)
			{
				p[i][j]=0;
			}
		}
		for(i=0; i<c; i++)
		{
			for(j=0; j<d; j++)
			{
				printf("\nEnter the (%d,%d) element : " ,i+1 ,i+1);
				scanf("%d" ,&b[i][j]);
			}
		}
		for(i=0; i<m; i++)
		{
			for(j=0; j<d; j++)
			{
				for(k=0; k<n; k++)
				{
					p[i][j] = p[i][j] + a[i][k] * b[k][j];
				}
			}
		}
		printf("\nThe product of the matrix is : \n\n");
		for(i=0; i<m; i++)
		{
			for(j=0; j<d; j++)
			{
				printf("\t%d" ,p[i][j]);
			}
			printf("\n\n");
		}
	}
	return 0;
}
