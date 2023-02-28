//By Jewel John, VML20C087 
//02/02/22
//Tree operations using Arrays


#include<stdio.h>
#include<stdlib.h>

int tree[100];
int largest = 0;
int size=1;

void insert(int item)
{
    int i;
    int flag = 0;
    int parent;
    int child;

    printf("\n<< Enter the parent: ");
    scanf("%d" ,&parent);

    for(i=1; i <= size; i++)
    {
        if(tree[i] == parent)
        {
            if(tree[i*2] != 0 && tree[(i*2)+1] != 0)
            {
                printf("\n>> !! Parent has both children");
            }
            else if(tree[i*2] == 0 && tree[(i*2)+1] != 0)
            {
                tree[i*2] = item;
                if(size < i*2)
                {
                    size = i*2;
                }
                printf("\n>> %d added as Left Child to %d" ,item ,parent);
            }
            else if(tree[i*2] != 0 && tree[(i*2)+1] == 0)
            {
                tree[(i*2)+1] = item;
                if(size < (i*2)+1)
                {
                    size = (i*2)+1;
                }
                printf("\n>> %d added as Right Child to %d" ,item ,parent);
            }
            else if(tree[i*2] == 0 && tree[(i*2)+1] == 0)
            {
                do
                {
                    printf("\n<< Left Child or Right Child(0/1): ");
                    scanf("%d" ,&child);

                    if(child == 0)
                    {
                        tree[i*2] = item;
                        if(size < i*2)
                        {
                            size = i*2;
                        }
                        printf("\n>> %d added as Left Child to %d" ,item ,parent);
                        flag = 1;
                    }
                    else if(child == 1)
                    {
                        tree[(i*2)+1] = item;
                        if(size < (i*2)+1)
                        {
                            size = (i*2)+1;
                        }
                        printf("\n>> %d added as Right Child to %d" ,item ,parent);
                        flag = 1;
                    }
                    else
                    {
                        printf("\n>> !! Invalid Choice");
                    }

                }while(flag != 1);
            }
        }
    }
}

void delete(int item)
{
    int flag = 0;
    int i    = 1;

    for(i=1; i <= size && flag != 1; i++)
    {
        if(tree[i] == item)
        {
            if(tree[i*2] == 0 && tree[(i*2)+1] == 0)
            {
                tree[i]=0;
                printf("\n>> Node %d has been successfully removed" ,item);
            }
            else
            {
                printf("\n>> !! Element is not a leaf node");
            }
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("\n>> !! Item not found");
    }
}

void inorder(int x)
{
    int parent = x;

    if(tree[1] == 0)
    {
        printf("\n>> !! The tree is empty!");
    }
    else if(tree[parent] != 0)
    {
        inorder(parent*2);
        printf("%d\t" ,tree[parent]);
        inorder((parent*2)+1);
    }
}

void preorder(int x)
{
    int parent = x;
    
    if(tree[1] == 0)
    {
        printf("\n>> !! The tree is empty!");
    }
    else if(tree[parent] != 0)
    {
        printf("%d\t" ,tree[parent]);
        preorder(parent*2);
        preorder((parent*2)+1);
    }
}

void postorder(int x)
{
    int parent = x;

    if(tree[1] == 0)
    {
        printf("\n>> !! The tree is empty!");
    }
    else if(tree[parent] != 0)
    {
        postorder(parent*2);
        postorder((parent*2)+1);
        printf("%d\t" ,tree[parent]);
    }
}

int main()
{
    int num;
    int choice;
    
    printf("\nEnter the root: ");
    scanf("%d" ,&tree[1]);
    do
    {
        printf("\n\n1.Insert\n2.Delete\n3.Inorder\n4.Pre-order\n5.Post-order\n6.Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d" ,&choice);

        switch(choice)
        {
            case 1:
            {
                printf("\n<< Enter the element to be inserted : ");
                scanf("%d" ,&num);
                insert(num);
            }
            break;
            case 2:
            {
                printf("\n<< Enter the item you want to delete : ");
                scanf("%d" ,&num);
                delete(num);
            }
            break;
            case 3:
            {
                inorder(1);
            }
            break;
            case 4:
            {
                preorder(1);
            }
            break;
            case 5:
            {
                postorder(1);
            }
            break;
            case 6:
            {
                printf("\n...Program aborting...!");
            }
            break;
            default:
            {
                printf("\n...Invalid Choice...!");
            }
            break;
        }
    }
    while(choice != 6);
}