#include<stdio.h>
#include<stdlib.h> 

int front = -1;
int rear  = -1;
int count =  0;
int n;

void enQueue(int queue[n])
{
    int item;
    int flag = 0;
    char ch;

    printf("\n<- Enter the number to be inserted : ");
    scanf("%d", &item);
    printf("\n<- Where do you want to insert %d (f/r): " ,item);
    scanf("%c", &ch);

    do
    {
        if(ch == 'f' || ch == 'F')
        {
            flag = 1;
        }
        else if(ch == 'r' || ch == 'R')
        {
            flag = 1;

            if (rear == n - 1)
            {
                printf("\n-> Queue is Full!");
            }
            else if (front == -1)
            {
                front = 0;
                rear = rear + 1;
                queue[rear] = item;
                count++;
                printf("\n-> %d is inserted\n", item);
            }
            else
            {
                rear = rear + 1;
                queue[rear] = item;
                count++;
                printf("\n-> %d is inserted\n", item);
            }
        }
        else
        {
            printf("\nInvalid Choice!");
        }
    }while(flag == 0)
}
void deQueue(int queue[n])
{
    int item;
    if (rear == -1 || front > rear)
    {
        printf("\n-> Queue is Empty!\n");
    }
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
            count--;
            printf("\n-> %d is deleted\n", item);
        }
    }
}
void display(int queue[n])
{
    int i;
    if (rear == -1)
    {
        printf("\n-> Queue is empty");
    }
    else
    {
        printf("\n-> Elements :\n\n ");
        for (i=front; i<=rear; i++)
        {
            printf("\n- %d. %d", i+1, queue[i]);
        }
    }
}

void sort(int queue[n])
{
    int i;
    int j;
    int temp;

    if(count>1)
    {
        for(i=front; i<=rear; i++)
        {
            for(j=i+1; j<=rear; j++)
            {
                if(queue[i] > queue[j])
                {
                    temp     = queue[i];
                    queue[i] = queue[j];
                    queue[j] = temp;
                }
            }
        }
    }
}

int main()
{
    int choice;
    int queue[n];
    printf("\n<- Enter array size : ");
    scanf("%d", &n);
    do
    {
        printf("\n\n1.Insertion\n2.Deletion\n3.Display\n4.Exit");
        printf("\n\n<- Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enQueue(queue);
            sort(queue);
            break;
        case 2:
            deQueue(queue);
            break;
        case 3:
            display(queue);
            break;
        case 4:
            printf("-> Aborting Program..!");
            break;
        default:
            printf("-> Invalid Choice!");
            break;
        }
    } while (choice != 4);

    if (choice == 4)
    {
        return 0;
    }
}