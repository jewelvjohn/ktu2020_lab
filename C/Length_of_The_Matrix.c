#include<stdio.h>

int main()
{
	int ar[60],i,j;
	
	for(i=0; ;i++)
	{
	    printf("%d .Enter the element : ", i+1);
		scanf("%d", &ar[i]);
		
		if(ar[i]<0)
		{
			break;
		}
	}
	
	for(j=0;ar[j]>0;j++);
	{
		printf("The Length of array is : %d", j+1);
	}
	
	return 0;
}
