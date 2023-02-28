//By Jewel John, VML20C087 
//03/02/22
//Linear Search

#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int n, int x)
{
    int i;
    int flag = 0;
    
    for (i = 0; i<n && flag != 1; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            return i;
        }
    }
    if(flag == 0)
    {
    	return -1;
    }
}

int main()
{
    int arr[100];
    int result;
    int x;
    int n;
    int i;
    
    
    printf("\n>> Enter the length of the array : ");
    scanf("%d" ,&n);
    
    printf("\n>> Enter the elements : ");
    for(i=0; i<n; i++)
    {
    	scanf("%d" ,&arr[i]);
    }
    
    printf("\n>> Enter the number you want to search : ");
    scanf("%d" ,&x);
    
    result = search(arr, n, x);
    
    if(result == -1)
    {
    	 printf("\n<< Element is not present in array");
    }
    else
    {
        printf("\n<< %d is present at index %d", x, result);
    }

    return 0;
}