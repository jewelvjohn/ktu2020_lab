#include<stdio.h>
#include<stdlib.h>

int n;
int front = -1;
int rear  = -1;
int circular[20];

int isFull()
{
	if((front == rear + 1 ) || (front == 0 && rear == n-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEmpty()
{
	if(front == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enqueue(int x)
{
	if(isFull())
	{
		printf("\nThe queue is full!");
	}
	else
	{
		if(front == -1)
		{
			front = 0;
		}
		rear = (rear + 1)%n;
		circular[rear]=x;
		printf("\nInserted ELement = %d" ,x);
	}
}

void dequeue()
{
	int x;

	if(isEmpty())
	{
		printf("\n\nQueue is empty!");
	}
	else
	{
        x = circular[front];

		if(front == rear)
		{
			front = -1;
			rear  = -1;
		}
		else
		{
			front = (front + 1)%n;
		}

		printf("\nRemoved Element = %d" ,x);
	}
}

void display()
{
	int i;

	if(isEmpty())
	{
		printf("\n\nQueue is empty!");
	}
	else
	{
		printf("\n\nElements : \n");
		for(i = front; i != rear; i = (i+1)%n)
		{
			printf("\n%d" ,circular[i]);
		}
		printf("\n%d" ,circular[i]);
	}
}

int main()
{
	int item;
	int choice;
	int flag = 1;

	printf("\nEnter the size of the queue : ");
	scanf("%d" ,&n);

	do
	{
		printf("\n\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");

		printf("\n\nEnter your choice : ");
		scanf("%d" ,&choice);

		switch(choice)
		{
			case 1:
			{
				printf("\nEnter the element to be inserted : ");
				scanf("%d" ,&item);
				enqueue(item);
				display();
				flag = 1;
			}
			break;
			case 2:
			{
				dequeue();
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