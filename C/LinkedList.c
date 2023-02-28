#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int data;
  struct node* next;
};

void insertAtBeginning(struct node** head, int item) 
{
  struct node* new = (struct node*)malloc(sizeof(struct node));

  new->data = item;
  new->next = (*head);

  (*head) = new;
}

void insertAny(struct node** head, int num, int prev)
{
  int flag = 0;
  struct node* new = (struct node*)malloc(sizeof(struct node));
  struct node* between = *head;

  if(between->data == prev) 
  {
    new->data = num;
    new->next = between->next;
    between->next = new;
    return;
  }
  while(between->next != NULL && flag != 1)
  {
    between = between->next;
    if(between->data == prev)
    {
      flag = 1;
    }
  }

  if(flag == 0)
  {
    printf("\n>> !! That element doesn't exist");
  }
  else
  {
    new->data = num;
    new->next = between->next;
    between->next = new;
  }
}

void insertAtEnd(struct node** head, int item) 
{
  struct node* new  = (struct node*)malloc(sizeof(struct node));
  struct node* last = *head;

  new->data = item;
  new->next = NULL;

  if(*head == NULL) 
  {
    *head = new;
    return;
  }
  while(last->next != NULL) 
  {
    last = last->next;
  }

  last->next = new;
  return;
}

void deleteAtBeginning(struct node** head)
{
  struct node *temp = *head;
  *head = temp->next;
  free(temp);
}

void deleteAtEnd(struct node** head)
{
  struct node *temp = *head;

  if ((*head)->next == NULL)
  {
    *head = NULL;
  }
  else
  {
    while(temp->next->next != NULL)
    {
      temp = temp->next;
    }
    struct node* lastNode = temp->next;
    temp->next = NULL;
    free(lastNode);
  }
}

void deleteAny(struct node** head, int item) 
{
  struct node *temp = *head, *prev;

  if(temp != NULL && temp->data == item) 
  {
    *head = temp->next;
    free(temp);
    return;
  }
  while(temp != NULL && temp->data != item) 
  {
    prev = temp;
    temp = temp->next;
  }

  if(temp == NULL)
  {
    printf("\n>> !! Not found");
    return;
  }
 
  prev->next = temp->next;
  free(temp);
}

void printList(struct node* list) 
{
  while (list != NULL) 
  {
    printf(" %d ", list->data);
    list = list->next;
  }
}

void main() 
{
  int num;
  int prev;
  int choice;
  struct node* head = NULL;

  do
  {
    printf("\n \n1.Insert at beginning \n2.Insert at end \n3.Insert at any postion \n4.Delete at beginning \n5.Delete at end \n6.Delete any \n7.Display \n8.Exit");
    printf("\n\nEnter your choice : ");
    scanf("%d" ,&choice);

    switch(choice)
    {
      case 1:
      {
        printf("\n<< Enter the item: ");
        scanf("%d" ,&num);
        insertAtBeginning(&head, num);
      }
      break;
      case 2:
      {
        printf("\n<< Enter the item: ");
        scanf("%d" ,&num);
        insertAtEnd(&head, num);
      }
      break;
      case 3:
      {
        printf("\n<< Enter the item: ");
        scanf("%d" ,&num);
        printf("\n<< Where to place(Placed infront of the number): ");
        scanf("%d" ,&prev);

        insertAny(&head, num, prev);
      }
      break;
      case 4:
      {
        deleteAtBeginning(&head);
        printf("\n>> Successfully remove from the beginning of list");
      }
      break;
      case 5:
      {
        deleteAtEnd(&head);
        printf("\n>> Successfully remove from the end of the list");
      }
      break;
      case 6:
      {
        printf("\n<< Enter the number you want to delete: ");
        scanf("%d" ,&num);

        deleteAny(&head, num);
      }
      break;
      case 7:
      {
        printf("\nThe List: ");
        printList(head);
      }
      break;
      case 8:
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
  }while (choice != 8);
}