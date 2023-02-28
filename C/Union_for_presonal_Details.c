#include<stdio.h>

union person
{
	char name[25];
	char address[25];
	char pincode[25];
};

int main()
{
	union person per;
	
	printf("\nEnter the name    : ");
	gets(per.name);
	printf("\nEnter the address : ");
	gets(per.address);
	printf("\nEnter the pincode : ");
	gets(per.pincode);
	
	printf("\n\n The Details");
	printf("\n\nThe name    : ");
	puts(per.name);
	printf("\nThe address : ");
	puts(per.address);
	printf("\nThe pincode : ");
	puts(per.pincode);
		
	return 0;
}
