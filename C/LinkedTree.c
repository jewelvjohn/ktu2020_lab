#include <stdio.h>
#include <stdlib.h>
#define MAX 50
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
struct node *root = NULL, *stack[MAX];
struct node *search(struct node *ptro, int key)
{
    struct node *ptr, *temp;
    ptr = ptro;
    if (ptr->data == key)
        return ptr;
    if (ptr->lchild != NULL)
    {
        temp = search(ptr->lchild, key);
        if (temp != NULL)
            return temp;
    }
    if (ptr->rchild != NULL)
    {
        temp = search(ptr->rchild, key);
        if (temp != NULL)
            return temp;
    }
    else
        return NULL;
}
void insert()
{
    struct node *ptr, *ptr2;
    printf("\nEnter data to insert and parent: ");
    int d, key, choice;
    scanf("%d %d", &d, &key);
    ptr = search(root, key);
    if (ptr == NULL)
    {
        printf("\nParent not found.\n");
        return;
    }
    if (ptr->lchild == NULL || ptr->rchild == NULL)
    {
        printf("\n1. Left 2. Right: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (ptr->lchild == NULL)
            {
                ptr2 = malloc(sizeof(struct node));
                ptr2->data = d;
                ptr->lchild = ptr2;
                ptr2->lchild = NULL;
                ptr2->rchild = NULL;
            }
            else
            {
                printf("\nLeft child is not free.\n");
                return;
            }
        }
        if (choice == 2)
        {
            if (ptr->rchild == NULL)
            {
                ptr2 = malloc(sizeof(struct node));
                ptr2->data = d;
                ptr->rchild = ptr2;
                ptr2->lchild = NULL;
                ptr2->lchild = NULL;
            }
            else
            {
                printf("\nRight child is not free.\n");
                return;
            }
        }
    }
    else
    {
        printf("\nChild node is not free.\n");
    }
}
struct node *delete (struct node *ptr1, int item)
{
    if (ptr1 == NULL)
        return (NULL);
    ptr1->lchild = delete (ptr1->lchild, item);
    ptr1->rchild = delete (ptr1->rchild, item);
    if (ptr1->data == item && ptr1->lchild == NULL && ptr1->rchild == NULL)
        return (NULL);
    return (ptr1);
}
void preorder(struct node *root)
{
    struct node *ptr;
    ptr = root;
    if (ptr != NULL)
    {
        printf(" %d", ptr->data);
        preorder(ptr->lchild);
        preorder(ptr->rchild);
    }
}
void inorder(struct node *root)
{
    struct node *ptr;
    ptr = root;
    if (ptr != NULL)
    {
        inorder(ptr->lchild);
        printf(" %d", ptr->data);
        inorder(ptr->rchild);
    }
}
void postorder(struct node *root)
{
    struct node *ptr;
    ptr = root;
    if (ptr != NULL)
    {
        postorder(ptr->lchild);
        postorder(ptr->rchild);
        printf(" %d", ptr->data);
    }
}
void main()
{
    printf("\n\nEnter root node data: ");
    root = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &root->data);
    root->lchild = NULL;
    root->rchild = NULL;
    int choice;
    do
    {
        printf("\n\n1.Insert \n2.inorder \n3.preorder \n4.postorder \n5.Delete a node \n6.Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("\nEnter element to delete: ");
            int item;
            scanf("%d", &item);
            delete (root, item);
            break;
        case 6:
            printf("\nExiting..\n");
            exit(0);
        }
    } while (choice != 7);
}