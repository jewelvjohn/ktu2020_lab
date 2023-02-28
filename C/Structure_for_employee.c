#include<stdio.h>

struct employee 
{
	char name[30];
	int id ,salary;
};

int main()
{
	struct employee em;
	
	printf("\nEnter the Name of the Employee : ");
	gets(em.name);
	
	printf("\nEnter the ID of the Employee : ");
	scanf("%d" ,&em.id);
	
	printf("\nEnter the salary of the Employee : ");
	scanf("%d" ,&em.salary);
	
	printf("\n\t  *_*_*_*_*_*_*_*_*  ");
	
	printf("\n\nThe Name of the Employee is : ");
	puts(em.name);
	printf("\nThe ID of the Employee is : %d" ,em.id);
	printf("\n\nThe Salary of the Employee is : %d" ,em.salary);
	
	return 0;
}
