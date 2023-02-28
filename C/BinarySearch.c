//By Jewel John, VML20C087 
//03/02/22
//Binary Search

#include <stdio.h>
#include <stdlib.h>

int bs(int arr[], int l, int r, int x)
{
	int flag = 0;
	int m;
	
    while (l <= r && flag != 1) 
    {
        m = l + (r - l) / 2;

        if (arr[m] == x)
        {
            flag = 1;
            return m;
        }
        else if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
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
    
    result = bs(arr, 0, n-1, x);
    
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