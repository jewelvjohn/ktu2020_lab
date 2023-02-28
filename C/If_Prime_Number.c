#include <stdio.h>

int main()
{
	int i, number, flag=0;
	printf ("Enter Your Number ");
	scanf ("%d" ,&number);
	if (number == 1)
	{
		printf(" Its neither prime nor composite");
	}
	else
	{
		for (i=2;i<=number/2;i++)
		{
			if(number % i == 0)
			{
				flag=1;
				printf (" Its not a prime number");
				break;
			}
		}
		if (flag != 1)
		{
			printf (" Its a prime number");
		}
	}
	
	return 0;
}
