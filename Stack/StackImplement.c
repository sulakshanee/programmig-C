#include <stdio.h>

int top = -1;
const MAX = 5;
int stack[5];

int isFull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("Your Stack is Full");
    }
}

int pop()
{
    if (!isEmpty())
    {
        int data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Your Stack is Empty");
    }
}

int main()
{
    int element;
    int i;

    printf("Enter your stack elements-: ");
    while (!isFull())
    {
        scanf("%d", &element);
        push(element);
    }

    if (isFull())
    {
        printf("Stack is Full.\n");
    }
    else
    {
        printf("Stack is not Full.\n");
    }

    printf("Display your stack elements -: ");
    while (!isEmpty())
    {
        printf("%d ", pop());
    }

    if (isEmpty())
    {
        printf("\nStack is Empty.");
    }
    else
    {
        printf("\nStack is not Empty.");
    }

    return 0;
}
