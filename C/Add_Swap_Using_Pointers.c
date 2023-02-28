//Swapping and Sum of Two Numbers Using Pointers
//Jewel John - g47ost

#include<stdio.h>

int main()
{
    int a, b, *p1, *p2, temp, sum;

    printf("\nEnter two numbers : ");
    scanf("%d%d" ,&a ,&b);
    printf("\n\nThe entered numbers A = %d, B = %d" ,a ,b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    sum = *p1 + *p2;

    printf("\nThe numbers after swapping A = %d, B = %d" ,a ,b);
    printf("\nTHe sum of the numbers : %d" ,sum);

    return 0;
}