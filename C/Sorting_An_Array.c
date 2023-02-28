#include <stdio.h>

int main()
{
    int limit, values[100], temp=0, i, j;
    
    printf("Enter the limit : ");
    scanf("%d" ,&limit);
    
    printf("Enter the values : ");
    for(i=0; i<limit; i++)
	{
        scanf("%d" ,&values[i]);
    }
    
    for(i=0; i<limit-1; i++)
	{
        for (j=0; j<limit-i-1; j++)
		{
            if (values[j]>values[j+1])
			{
                temp       = values[j];
                values[j]  = values[j+1];
                values[j+1]= temp;
            }
        }
    }
    
    printf("sorted values are : ");
    for(i=0; i<limit; i++)
	{
        printf("\t%d" ,values[i]);
    }
    
    return 0;
}
