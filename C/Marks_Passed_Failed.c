#include<stdio.h>

int main()
{
	int mark=0;
	printf("Enter your marks : ");
	scanf("%d" ,&mark);
	switch(mark)
	{
		case (80) :
			printf("\nYou have a Distinction");
			break;
		case (50) :
			printf("\nYou have passed");
			break;
		default :
			printf("\nYou have failed");
			break;
	}
	return 0;
}
