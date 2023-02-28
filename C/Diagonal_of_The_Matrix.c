#include<stdio.h>

int main()
{
	int ar[60][60],i,j,m,n;
	
	printf("Enter the order of the matrix: ");
	scanf("%d" ,&m);
	n=m;
	
	for(i=1; i<=m; i++)
   	{
   	    for(j=1; j<=n; j++)
   	    {
   	    	printf("\nEnter the (%d,%d) element: " ,i+1 ,j+1);
   	    	scanf("%d" ,&ar[i][j]);
   		}
   	}
    	
   	printf("\n\n");
    	
   	for(i=1; i<=m; i++)
   	{
   	    for(j=1; j<=n; j++)
   	    {
   	    	printf("\t%d ", ar[i][j]);
   		}
   		printf("\n\n");
   	}
    	
	printf("\nDiagonal of the matrix is : \n\n");
		
   	for(i=1; i<=m; i++)
   	{
   	    for(j=1; j<=n; j++)
   	    {
   	    	if (i=j)
	       	{
        		printf("\t%d  ", ar[i][j]);
    		}
    	}
    	printf("\n\n");	
   }		
	return 0;
}
