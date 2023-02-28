#include <stdio.h>

int main()
{
	float num1,num2,num3;
	printf("Enter the three numbers ");
	scanf("%f%f%f" ,&num1,&num2,&num3);

	if (num1>num2 && num1>num3)
	{
		printf("%f" ,num1);
	    printf(" is greater than %f %f" ,num2 ,num3);
	}
	else if (num2>num3 && num2>num1)
	{
		printf("%f" ,num2);
	    printf(" is greater than %f %f" ,num1 ,num3);
	}
	else if (num3>num1 && num3>num2)
	{
		printf("%f" ,num3);
	    printf(" is greater than %f %f" ,num1 ,num2);
	}
	else
	{
		printf("They might be equal");
	}

	return 0;
}
