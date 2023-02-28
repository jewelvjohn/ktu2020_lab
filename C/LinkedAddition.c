//Jewel John 
//VML20CS087
//27/01/2022
//Polynomials Using Linked List

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
struct Linked *sum     = NULL;
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

void addition(struct Linked* first, struct Linked* second, struct Linked* sum)
{
    while (first->next && second->next) 
    {
        if (first->expo > second->expo) 
        {
            sum->expo = first->expo;
            sum->coeff = first->coeff;
            first = first->next;
        }
 
        else if (first->expo < second->expo) 
        {
            sum->expo = second->expo;
            sum->coeff = second->coeff;
            second = second->next;
        }
 
        else 
        {
            sum->expo = first->expo;
            sum->coeff = first->coeff + second->coeff;
            first = first->next;
            second = second->next;
        }
 
        sum->next = (struct Linked*)malloc(sizeof(struct Linked));
        sum = sum->next;
        sum->next = NULL;
    }
    while (first->next || second->next) 
    {
        if (first->next) 
        {
            sum->expo = first->expo;
            sum->coeff = first->coeff;
            first = first->next;
        }
        if (second->next) 
        {
            sum->expo = second->expo;
            sum->coeff = second->coeff;
            second = second->next;
        }
        sum->next = (struct Linked*)malloc(sizeof(struct Linked));
        sum = sum->next;
        sum->next = NULL;
    }
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

    sum = (struct Linked*)malloc(sizeof(struct Linked));
 
    addition(first, second, sum);

    printf("\n\n\n\t>> The Sum of these polynomial you entered :");
    display(sum);
}
