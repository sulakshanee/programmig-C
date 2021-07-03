#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

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

int main()
{
    int i, size, a, b;
    Stack A;
    Stack B;

    printf("Enter size -: ");
    scanf("%d", &size);

    int array[size];

    for (i = 0; i < size; i++)
    {
        int num = (rand() % (10 - 50 + 1)) + 50;
        printf("%d ", num);
        array[i] = num;
    }

    for (i = 0; i < size; i++)
    {
        if (!isFull(&A))
        {
            push(array[i], &A);
            // push(array[size - 1 - i], &B);
        }
    }

    while (!isEmpty(&A) && !isEmpty(&B))
    {
        if (A.entry[A.top] > B.entry[B.top])
        {
            printf("2 ");
            pop(&A);
        }

        else if (A.entry[A.top] < B.entry[B.top])
        {
            printf("1 ");
            pop(&B);
        }
        else
        {
            printf("1 ");
            pop(&A);
            pop(&B);
        }
    }

    return 0;
}