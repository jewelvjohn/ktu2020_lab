#include <stdio.h>
int main()
{
	int ar[50][50],m,n,i,j,srow,scol,sdia=0;
	printf("Enter the order of the square matrix: ");
	scanf("%d%d" ,&m ,&n);
	for(i=1; i<m+1; i++)
	{
		for(j=1; j<n+1; j++)
		{
			printf("\nEnter the (%d,%d) element: " , i, j);
			scanf("%d", &ar[i][j]);
		}
	}
	printf("\n\n");
	for(i=1; i<m+1; i++)
	{
		srow = 0;
		for(j=1; j<n+1; j++)
		{
			printf("\t%d", ar[i][j]);
			srow = srow + ar[i][j];
		}
		printf("   |   %d", srow);
		printf("\n\n");
	}
	for(j=1; j<n+1; j++)
	{
		printf("\t__");
	}
	printf("\n\n");
	for(j=1; j<n+1; j++)
	{
		scol = 0;
		for(i=1; i<m+1; i++)
		{
			scol = scol + ar[i][j];
		}
		printf("\t%d ", scol);
	}
	for(i=1; i<=m; i++)
   	{
   	    for(j=1; j<=n; j++)
   	    {
   	    	if (i=j)
	       	{
        		sdia = sdia + ar[i][j];
    		}
    	}
    }
    if (m == n)
    {
    	printf("\n\nThe sum of diagonal elements is: %d" ,sdia);
	}
    else
    {
    	printf("\n\nIt's not possible to print the \nsum of diagonal elements for this matrix\n");
	}
	return 0;
}
