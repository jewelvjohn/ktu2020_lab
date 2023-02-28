#include<stdio.h>

int main()
{
	int ar[60][60],tr[60][60],i,j,m,n;
	
	printf("Enter the Number of rows: ");
	scanf("%d" ,&m);
	printf("Enter the Number of columns: ");
	scanf("%d" ,&n);
	
	for(i=0; i<m; i++)
	{
	    for(j=0; j<n; j++)
	    {
	    	printf("\nEnter the (%d,%d) element: " ,i+1 ,j+1);
	    	scanf("%d" ,&ar[i][j]);
		}
	}
	
	printf("\nThe transpose of the entered matrix is : \n\n");
	
	if (m==n)
	{
		for(i=0; i<m; i++)
    	{
		    for(j=0; j<n; j++)
		    {
		    	tr[i][j]=ar[j][i];
		    	printf("\t%d  ", tr[i][j]);
			}
			printf("\n\n");
		}
	}
	else if (m>n)
	{
		for(i=0; i<n; i++)
    	{
		    for(j=0; j<m; j++)
		    {
		    	tr[i][j]=ar[j][i];
		    	printf("\t%d  ", tr[i][j]);
			}
			printf("\n\n");
		}
	}
	else if (m<n)
	{
		for(i=0; i<m; i++)
    	{
		    for(j=0; j<n; j++)
		    {
		    	tr[i][j]=ar[j][i];
		    	printf("\t%d  ", tr[i][j]);
			}
			printf("\n\n");
		}
	}
	return 0;
}
