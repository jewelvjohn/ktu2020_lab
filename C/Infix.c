//By Jewel John, VML20CS087 
//19/01/22
//Infix to Postfix Converter

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
 
    if (!stack) 
    {
        return NULL;
    }

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    return stack;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack* stack)
{
    if(!isEmpty(stack))
    {
        return stack->array[stack->top--];
    }
    return '$';
}

void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int priority(char ch)
{
    switch (ch)
    {
	    case '+':
	    case '-':
	    {
	        return 1;
	    }
	    case '*':
	    case '/':
	    {
	        return 2;
	    }
	    case '^':
	    {
	        return 3;
	    }
    }
    return -1;
}

int postfix(char* exp)
{
    int i, k;
    struct Stack* stack = createStack(strlen(exp));

    if(!stack)
    {
        return -1 ;
    }

    for (i = 0, k = -1; exp[i]; ++i)
    {
        if (isOperand(exp[i]))
        {
            exp[++k] = exp[i];
        }
        else if (exp[i] == '(')
        {
            push(stack, exp[i]);
        }
        else if (exp[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
            {
                exp[++k] = pop(stack);
            }
            if (!isEmpty(stack) && peek(stack) != '(')
            {
                printf("\n>> !!Invalid Expression");
                return -1;            
            }
            else
            {
                pop(stack);
            }
        }
        else
        {
            while (!isEmpty(stack) && priority(exp[i]) <= priority(peek(stack)))
            {
                exp[++k] = pop(stack);
            }
            push(stack, exp[i]);
        }
    }

    while (!isEmpty(stack))
	{
        exp[++k] = pop(stack );
	}
    exp[++k] = '\0';
    printf("%s", exp);
}

int main()
{
    char exp[100];

    printf("\n<< Enter your infix Expression: ");
    scanf("%s", exp);

    printf("\n>> The postfix expression for \nyour infix expression is: ");
    postfix(exp);

    printf("\n");
    return 0;
}