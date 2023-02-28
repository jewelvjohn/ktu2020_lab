//By Jewel John, VML20C087 
//02/02/22
//Tree operations using Linked Lists

#include <stdio.h>
#include <stdlib.h>
 
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* new(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));

    temp->data  = item;
    temp->left  = NULL;
    temp->right = NULL;

    return temp;
}
 

struct node* insert(struct node* tree, int item)
{
    if (tree == NULL)
    {
        return new(item);
    }

    else if (item < tree->data)
    {
        printf("\n>> %d added as a left child to %d" ,item ,tree->data);
        tree->left = insert(tree->left, item);
    }
    else if (item > tree->data)
    {
        printf("\n>> %d added as a right child to %d" ,item ,tree->data);
        tree->right = insert(tree->right, item);
    }
    return tree;
}

struct node* delete(struct node* tree, int item)
{
    if (tree->data == item)
    {
        if(tree->left == NULL && tree->right == NULL)
        {
            tree = NULL;
            printf("\n>> %d was deteted from the tree" ,item);
        }
        else
        {
            printf("\n>> !! The deleting node is not a leaf node");
        }
    }

    else if(item < tree->data)
    {
        tree->left = delete(tree->left, item);
    }
    else if(item > tree->data)
    {
        tree->right = delete(tree->right, item);
    }
    return tree;
}

void inorder(struct node* parent)
{
    if (parent != NULL) 
    {
        inorder(parent->left);
        printf("%d \t", parent->data);
        inorder(parent->right);
    }
}

void preorder(struct node* parent)
{
    if (parent != NULL) 
    {
        printf("%d \t", parent->data);
        inorder(parent->left);
        inorder(parent->right);
    }
}

void postorder(struct node* parent)
{
    if (parent != NULL) 
    {
        inorder(parent->left);
        inorder(parent->right);
        printf("%d \t", parent->data);
    }
}

void main()
{
    int num;
    int item;
    int choice;
    struct node* tree = NULL;
    
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
                if(tree == NULL)
                {
                    tree = insert(tree, num);
                    printf("\n>> %d added as root of the tree" ,num);

                }
                else
                {
                    insert(tree, num);
                }
            }
            break;
            case 2:
            {
                printf("\n<< Enter the item you want to delete : ");
                scanf("%d" ,&num);
                delete(tree, num);
            }
            break;
            case 3:
            {
                printf("\n>> The tree inorder : ");
                inorder(tree);
            }
            break;
            case 4:
            {
                printf("\n>> The tree pre-order : ");
                preorder(tree);
            }
            break;
            case 5:
            {
                printf("\n>> The tree post-order : ");
                postorder(tree);
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
    }while(choice != 6);
}
