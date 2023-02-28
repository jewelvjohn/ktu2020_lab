#include <stdio.h>
#include <stdlib.h>
#define size 20

char openS[size], visitS[size];
char openQ[size], visitQ[size];

int top = -1, in = -1;
int front = -1, rear = -1, ind = -1;

void push(char x)
{
    if (top != size-1)
    {
        openS[++top] = x;
    }
}

char pop()
{
    char x = openS[top];
    top--;
    return x;
}

int search(char visit[], char x)
{
    int i, flag = 0;
    for (i = 0; i <= size; i++)
    {
        if (visit[i] == x)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

void enqueue(char x)
{
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    openQ[rear] = x;
}

char dequeue()
{
    char x = openQ[front];
    front++;
    return x;
}

int findIn(int n, char data[], char u)
{
    int a, i;
    for (i = 0; i < n; i++)
    {
        if (data[i] == u)
        {
            a = i;
        }
    }
    return a;
}

void dfs(int n, int array[n][n], char data[n])
{
    if (n == 0)
    {
        printf("\n>> Graph is empty!\n");
        return;
    }

    char u, x;
    int i, j, a;
    top = -1;
    in = -1;

    printf("\n>> Enter the starting element: ");
    scanf(" %c", &x);
    push(x);
    while (top != -1)
    {
        u = pop();
        if (search(visitS, u) == 0)
        {
            visitS[++in] = u;
            a = findIn(n, data, u);
            for (i = 0; i < n; i++)
            {
                if (array[a][i] == 1)
                {
                    push(data[i]);
                }
            }
        }
    }
    printf("\n>> Visited: ");
    for (i = 0; i <= in; i++)
    {
        printf("%c  ", visitS[i]);
    }
}

void bfs(int n, int array[n][n], char data[n])
{
    if (n == 0)
    {
        printf("\n>> Graph is empty! \n");
        return;
    }

    char u, x;
    int i, a;
    front = -1;
    rear = -1;
    ind = -1;

    printf("\n>> Enter the starting element: ");
    scanf(" %c", &x);
    enqueue(x);
    while (!(front == -1 || front > rear))
    {
        u = dequeue();
        if (search(visitQ, u) == 0)
        {
            visitQ[++ind] = u;
            a = findIn(n, data, u);
            for (i = 0; i < n; i++)
            {
                if (array[a][i] == 1)
                {
                    enqueue(data[i]);
                }
            }
        }
    }
    printf("\n>> Visited: ");
    for (i = 0; i <= ind; i++)
    {
        printf("%c  ", visitQ[i]);
    }
}

void main()
{
    int n, i, j, k, choice;

    printf("\n>> Enter the number of nodes: ");
    scanf("%d", &n);

    int arr[n][n];
    char data[n];

    printf("\n>> Enter the node datas: ");
    for (i = 0; i < n; i++)
    {
        printf("\n%d: " ,(i+1));
        scanf(" %c", &data[i]);
    }

    printf("Enter the adjacency matrix representation of the graph: \n");
    for (i = 0; i < n; i++)
    {
        printf("\n     ");
        for(k=0; k<n; k++)
        {
            printf(" %c" ,data[k]);
        }
        printf("\n     ");
        for(k=0; k<n; k++)
        {
            printf(" --");
        }

        printf("\n>> %c: " ,data[i]);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    do
    {
        printf("\n\n1.DFS\n2.BFS\n3.Exit\n\n>> Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                dfs(n, arr, data);
            }
            break;
            case 2:
            {
                bfs(n, arr, data);
            }
            break;
            case 3:
            {
                printf("\n\tExiting Program!\n");
            }
            break;
            default:
            {
                printf("\n>> Invalid Choice!\n   Try again...\n");
            }
        }
    } while (choice != 3);
}