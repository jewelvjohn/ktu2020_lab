#include <stdio.h>
#include <stdlib.h>

int size;

struct node
{
    int data;
    struct node *next;
};
struct node *chain[20];

int HashLP(int value, int hash[], int size)
{
    int key = value % size;
    if (value == hash[key])
    {
        return key;
    }
    else
    {
        int i = key % size;
        do
        {
            if (hash[i] == 0)
            {
                hash[i] = value;
                return i;
            }
            else if (hash[i] == value)
                return i;
            else
                i = (i + 1) % size;
        } while (i != key);
        return -1;
    }
}

void displayLP(int hash[], int size)
{
    int i;
    printf("\n   Index | value");
    for (i = 0; i < size; i++)
        printf("\n    %d    |    %d  ", i, hash[i]);
}

void HashChaining(int value)
{
    int key;
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    key = value % size;
    if (chain[key] == NULL)
        chain[key] = newNode;
    else
    {
        struct node *temp = chain[key];
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
}

void displayChaining()
{
    int i;
    printf("\n  Index  | value chain  \n");
    for (i = 0; i < size; i++)
    {
        struct node *temp = chain[i];
        printf("    [%d]  |", i);
        while (temp)
        {
            printf(" %d ->", temp->data);
            temp = temp->next;
        }
        printf(" NULL\n");
    }
}

void main()
{
    int choice, key, i, value;
    char x;
    do
    {
        printf("1.Hash Linear Probe\n2.Hash Chaining\n3.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nHash Linear Probe\n");
            printf("\nEnter hash table size: ");
            scanf("%d", &size);
            int hash[size];
            for (i = 0; i < size; i++)
                hash[i] = 0;
            do
            {
                printf("\nEnter the value : ");
                scanf("%d", &value);
                key = HashLP(value, hash, size);
                if (key == -1)
                    printf("\nHash table is full!");
                else
                    printf("\n%d is stored at index %d\n", value, key);
                displayLP(hash, size);
                printf("\nContinue (Y/n) : ");
                scanf(" %c", &x);
            } while (x == 'y' || x == 'Y');
            break;
        }
        case 2:
        {
            printf("\nHash Chaining\n");
            printf("\nEnter hash table size: ");
            scanf("%d", &size);
            int hash[size];
            for (i = 0; i < size; i++)
                hash[i] = 0;
            do
            {
                printf("\nEnter the value : ");
                scanf("%d", &value);
                HashChaining(value);
                displayChaining();
                printf("\nContinue (Y/N) : ");
                scanf(" %c", &x);
            } while (x == 'y' || x == 'Y');
            break;
        }
        case 3:
            printf("\nExiting Program!\n");
            break;
        default:
            printf("\nInvalid choice\nTry again...\n");
        }
    } while (choice != 3);
}