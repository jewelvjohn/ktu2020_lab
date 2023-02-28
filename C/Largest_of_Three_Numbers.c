#include<stdio.h>

int main()
{
	int a,b,c,big;
	printf("Enter the three numbers : ");
	scanf("%d%d%d" ,&a,&b,&c);
	big=a;
	if (b>a)
	
		big=b;
	
	if (c>a)
	
		big=c;
	
	printf("The largest number is : %d" ,big);
	
	return 0;	
}
