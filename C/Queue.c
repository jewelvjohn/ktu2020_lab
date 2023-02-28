#include<stdio.h>
#include<stdlib.h>

int n;
int front;
int rear;
int queue[20];

void enqueue(int x)
{
	if(rear == n-1)
	{
		printf("\nThe queue is full!");
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}

void dequeue()
{
	if(rear == -1)
	{
		printf("\n\nQueue is empty!");
	}
	else
	{
		printf("\nDequeued element : %d" ,queue[front]);
		front++;
	}
}

void display()
{
	int i;
	printf("\n\nElements : \n");
	for(i=front; i<=rear; i++)
	{
		printf("%d\n" ,queue[i]);
	}
}

int main()
{
	int item;
	int choice;
	int flag = 1;

	front = 0;
    rear  = -1;

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