#include<stdio.h>
#include<stdlib.h>

struct PQ
{
	int item;
	int priority;
};
struct PQ Q[20],temp;

int i,j,ch,v,p,front=-1,rear=-1,n;

void enqueue()
{
	if(rear==n)
	{
		printf("\nQueue full");
	}
	else
	{
		if(front==-1&&rear==-1)
		{
			front=0,rear=0;
		}
		printf("\nEnter the value and priority to add to queue : ");
		scanf("%d %d",&v,&p);
		Q[rear].item=v;
		Q[rear].priority=p;
		rear++;
	}
}
void sort()
{	
	for(i=front;i<rear;i++)
	{
		for(j=i+1;j<rear;j++)
		{
			if(Q[i].priority>Q[j].priority)
			{
				temp=Q[i];
				Q[i]=Q[j];
				Q[j]=temp;
			}
		}
	}
}
void dequeue()
{
    int x;

	if((front==-1&&rear==-1)||(front==rear+1))
	{
		printf("\nQueue Empty ");
	}
	else
	{
		x=Q[front].item;
		front++;
		printf("\nElement deleted is %d",x);		
	}            
}
void display()
{
	if((front==-1&&rear==-1)||(front==rear+1))
	{
		printf("\nQueue is empty ");
	}
	else
	{
		printf("\nItem\tPriority");
		for(i=front; i<=rear; i++)
		{
			printf("\n%d\t%d",Q[i].item,Q[i].priority);
		}
	}
}
void main()
{
    int flag=1;

	printf("\nEnter the number of elements in queue : ");
	scanf("%d",&n);
	do
	{
		printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		printf("\n\nEnter the choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : enqueue();
            {
				sort();
				display();
            }
			break;
			case 2 : 
            {
                dequeue();
            }
			break;
			case 3 : 
            {
                display();
            }
			break;
			case 4 : 
            {
                printf("\nAborting from program!");
                flag=0;
            }
			break;
			default : 
            {
                printf("\nInvalid Choice ");
            }
		}
	}
	while(flag==1);
}