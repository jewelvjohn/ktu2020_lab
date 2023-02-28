#include <stdio.h>
int main()
{
	int ar[50][50],i,j,n,redflag=0,blackflag=0;
	printf("Enter the order of the square matrix : ");
	scanf("%d" ,&n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter the (%d,%d) element : " ,i+1,j+1);
			scanf("%d" ,&ar[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if (i!=j && ar[i][j]!=0)
			{
				redflag=1;
				printf("\nThe matrix is not even a Diagonal Matrix\n");
				break;
			}
		}
		if (redflag==1)
		{
			break;
		}
	}
	if (redflag==0)
	{
		for(i=0; i<n; i++)
   		{
   		    for(j=0; j<n; j++)
   		    {
   		    	if (ar[i][i]==1)
		       	{
		       		blackflag=1;
  		    	  	printf("\nThe matrix is an Identity Matrix\n");
  		    	  	break;
  		  		}
   		 	}
   		 	if (blackflag==1)
   		 	{
   		 		break;
			}
  	    }
	}
	printf("\n");
	if (blackflag==0)
	{
		if (redflag==1)
		{
			printf("So, ");
		}
		printf("The matrix is not an Identity Matrix\n");
	}
	return 0;
}
