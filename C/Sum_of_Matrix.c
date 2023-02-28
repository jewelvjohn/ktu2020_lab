#include<stdio.h>

int main()
{
	int ar1[60][60],ar2[60][60],sum[60][60],i,j,m,n;
	
	printf("Enter the Number of rows: ");
	scanf("%d" ,&m);
	printf("Enter the Number of columns: ");
	scanf("%d" ,&n);
	for(i=0; i<m; i++)
	{
	    for(j=0; j<n; j++)
	    {
	    	printf("\nEnter the (%d,%d) element: " ,i+1 ,j+1);
	    	scanf("%d" ,&ar1[i][j]);
		}
	}
	printf("\nEnter the next matix");
	for(i=0; i<m; i++)
	{
	    for(j=0; j<n; j++)
	    {
	    	printf("\nEnter the (%d,%d) element: " ,i+1 ,j+1);
	    	scanf("%d" ,&ar2[i][j]);
		}
	}
	printf("\nThe sum of the entered matices is: \n\n");
	for(i=0; i<m; i++)
	{
		printf("\t");
	    for(j=0; j<n; j++)
	    {
	    	sum[i][j]=ar1[i][j]+ar2[i][j];
	    	printf("%d  " ,sum[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
