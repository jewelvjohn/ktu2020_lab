//By Jewel John, VML20C087 
//01/12/21
//Polynomial Addition

#include<stdio.h>

struct polynomial
{
	int coeff;
	int expon;
};

int main()
{
	int startA=0, startB, startR;
	int finishA, finishB, finishR;
	int i, n1, n2, n3=0;

	struct polynomial poly[20];

	printf("\nEnter the number of terms in First polynomial : ");
	scanf("%d" ,&n1);

	printf("\nEnter the number of terms in Second polynomial : ");
	scanf("%d" ,&n2);
	
	startA = 0;
	startB = n1;
	startR = n1+n2;

	finishA = n1-1; 
	finishB = n1+n2-1;

	printf("\n\n");

	printf("\nEnter the First Polynomial");
	printf("\n__________________________ \n\n");

	for(i=0; i<n1; i++)
	{
		printf("\nEnter the Coefficient :");
		scanf("%d" ,&poly[i].coeff);
		printf("\nEnter the Exponential of %dx^ : " ,poly[i].coeff);
		scanf("%d" ,&poly[i].expon);		
	}

	printf("\nFirst Matrix : \n\n");

	for(i=startA; i<startB; i++)
	{
		printf("%dX^%d",poly[i].coeff ,poly[i].expon);
		if(i==startB-1)
		continue;
		printf("+");
	}
	printf("\n\n");

	printf("\nEnter the Second Polynomial");
	printf("\n__________________________ \n\n");

	for(i=n1; i<n1+n2; i++)
	{
		printf("\nEnter the Coefficient :");
		scanf("%d" ,&poly[i].coeff);
		printf("\nEnter the Exponential of %dx^ : " ,poly[i].coeff);
		scanf("%d" ,&poly[i].expon);
		
	}

	printf("\nSecond Matrix : \n\n");

	for(i=startB; i<startR; i++)
	{
		printf("%dX^%d",poly[i].coeff ,poly[i].expon);
		if(i==startR-1)
		continue;
		printf("+");
	}
	printf("\n\n");

	while(startA <= finishA && startB <= finishB)
	{
		if(poly[startA].expon < poly[startB].expon)
		{
			poly[startR].expon = poly[startB].expon;
			poly[startR].coeff = poly[startB].coeff;
			startB++;
			startR++;
			n3++;
		}
		else if(poly[startA].expon > poly[startB].expon)
		{
			poly[startR].expon = poly[startA].expon;
			poly[startR].coeff = poly[startA].coeff;
			startA++;
			startR++;
			n3++;
		}
		else
		{
			poly[startR].coeff = poly[startA].coeff + poly[startB].coeff;
			poly[startR].expon = poly[startA].expon;
			startA++;
			startB++;
			startR++;
			n3++;			
		}
	}

	finishR = n1+n2+n3-1;

	printf("\nThe Sum of Matrices : \n\n");

	printf("\n");

	for(i=n1+n2; i<=finishR; i++)
	{
		printf("%dX^%d",poly[i].coeff ,poly[i].expon);
		if(i==finishR)
		continue;
		printf("+");
	}
	printf("\n\n");
		
	return 0;
}