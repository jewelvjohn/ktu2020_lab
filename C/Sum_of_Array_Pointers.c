#include<stdio.h>

int main()
{
    int array[50];
    int i, len;
    int *p, sum=0;

    printf("Enter the length of the array : ");
    scanf("%d" ,&len);

    for(i=0; i<len; i++)
    {
        printf("\nEnter the '%d' element : " ,i+1);
        scanf("%d" ,&array[i]);
    }

    for(p = &array[0]; p < &array[len]; p++)
    {
        sum = sum + *p;
    }

    printf("\nThe sum of the array is : %d\n" ,sum);

    return 0;
}