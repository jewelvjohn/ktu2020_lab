#include<stdio.h>
#include<stdlib.h>

int n;
int top;
int stack[20];

void push(int x)
{
	if(top == n-1)
	{
		printf("\nThe stack is full!");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("\n\nStack is empty!");
	}
	else
	{
		printf("\nPopped element : %d" ,stack[top]);
		top--;
	}
}

void display()
{
	int i;
	printf("\n\nElements : \n");
	for(i=top; i>=0; i--)
	{
		printf("%d\n" ,stack[i]);
	}
}

void insertatbottom(int x)
{
	int temp;
	if(top == -1)
	{
		push(x);
	}
	else
	{
		temp = stack[top];
		pop();
		insertatbottom(x);
		push(temp);
	}
}

void reverse()
{
	int temp;

	if(top == -1)
	{
		printf("\nStack got empty!");
	}
	else
	{
		temp = stack[top];
		pop();
		reverse();
		insertatbottom(temp);
	}
}

int main()
{
	int item;
	int choice;
	int flag = 1;

	top=-1;

	printf("\nEnter the size of the stack : ");
	scanf("%d" ,&n);

	do
	{
		printf("\n\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Reverse");
		printf("\n5.Exit");

		printf("\n\nEnter your choice : ");
		scanf("%d" ,&choice);

		switch(choice)
		{
			case 1:
			{
				printf("\nEnter the element to be inserted : ");
				scanf("%d" ,&item);
				push(item);
				display();
				flag = 1;
			}
			break;
			case 2:
			{
				pop();
				display();
				flag = 1;
			}
			break;
			case 3:
			{
				display();
				flag = 1;
			}
			break;
			case 4:
			{
				reverse();
				printf("\nReverse of the stack is : ");
				display();
				flag = 1;
			}
			break;
			case 5:
			{
				printf("Aborting the program!");
				flag = 0;
			}
			break;
			default:
			{
				printf("\nInvalid choice!");
				flag = 1;
			}
			break;
		}
	}while(flag == 1);	
}