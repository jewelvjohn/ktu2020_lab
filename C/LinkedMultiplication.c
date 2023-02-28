//Jewel John 
//VML20CS087
//27/01/2022
//Polynomials Using Linked List(Multiplication)

#include<stdio.h>
#include<stdlib.h>

struct Linked
{
    int coeff;
    int expo;
    struct Linked* next;
};

struct Linked *first   = NULL;
struct Linked *second  = NULL;
struct Linked *product = NULL;    

void create(int coeff, int expo, struct Linked** polynomial)
{
    struct Linked *n, *temp;
    temp = *polynomial;
    if (temp == NULL) 
    {
        n = (struct Linked*)malloc(sizeof(struct Linked));
        n->coeff = coeff;
        n->expo = expo;
        *polynomial = n;
        n->next = (struct Linked*)malloc(sizeof(struct Linked));
        n = n->next;
        n->next = NULL;
    }
    else 
    {
        n->coeff = coeff;
        n->expo = expo;
        n->next = (struct Linked*)malloc(sizeof(struct Linked));
        n = n->next;
        n->next = NULL;
    }
}

void multiplication(struct Linked* first, struct Linked* second, struct Linked* product)
{
    struct Linked *temp;
    temp = second;
    
    while (first->next != NULL) 
    {
        while(temp->next != NULL)
        {
            product->next  = (struct Linked*)malloc(sizeof(struct Linked));
            product->coeff = first->coeff * temp->coeff;
            product->expo  = first->expo + temp->expo;
            
            product = product->next;
            temp = temp->next;
        }
        temp = second;
        first = first->next;
    }
    product->next = NULL;
}


void display(struct Linked* polynomial)
{
    while (polynomial->next != NULL) 
    {
        if(polynomial->expo == 0)
        {
            printf(" %d X ", polynomial->coeff);
        }
        else
        {
            printf(" %d X^%d ", polynomial->coeff, polynomial->expo);
        }
        polynomial = polynomial->next;

        if (polynomial->coeff >= 0)
        {
            if (polynomial->next != NULL)
                printf("+");
        }
    }
}

void main()
{
    int m, n;
    int x, y;
    int i;


    printf("\nEnter the degree of the first polynomial : ");
    scanf("%d" ,&m);
    printf("\n");

    for(i=0; i<=m; i++)
    {
        y = m-i;

        printf("\n> Enter the coefficent of %dth power term : " ,y);
        scanf("%d" ,&x);
        create(x, y, &first);
    }
    
    printf("\nEnter the degree of the second polynomial : ");
    scanf("%d" ,&n);

    for(i=0; i<=n; i++)
    {
        y = n-i;
        
        printf("\n> Enter the coefficent of %dth power term : " ,y);
        scanf("%d" ,&x);
        create(x, y, &second);
    }

    printf("\n\n\n\t>> The first polynomial you entered :");
    display(first);

    printf("\n\n\n\t>> The second polynomial you entered :");
    display(second);

    product = (struct Linked*)malloc(sizeof(struct Linked));
 
    multiplication(first, second, product);

    printf("\n\n\n\t>> The Product of these polynomial you entered :");
    display(product);
}
 