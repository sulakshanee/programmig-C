#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAXSTACK 50

typedef int StackEntry;
typedef struct
{
    int top;
    StackEntry entry[MAXSTACK];
} Stack;

void CreateStack(Stack *s)
{
    s->top = -1;
}

bool isFull(const Stack *s)
{
    return (s->top == MAXSTACK - 1);
}

bool isEmpty(const Stack *s)
{
    return (s->top == -1);
}

void push(StackEntry item, Stack *s)
{
    if (!isFull(s))
    {
        s->entry[++s->top] = item;
    }
    else
    {
        printf("\nStack is Full");
    }
}

void pop(Stack *s)
{
    if (!isEmpty(s))
    {
        s->top--;
    }
    else
    {
        printf("\nStack is Empty");
    }
}