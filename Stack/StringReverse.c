#include <stdio.h>

char stack[10];
int MAX = 10;
int top = -1;

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

void push(char data)
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

char pop()
{
    if (!isEmpty())
    {
        char data = stack[top];
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
    char str[10];
    int i = 0;
    printf("Enter your String -: ");
    scanf("%[^\n]", &str);
    while (!isFull())
    {
        push(str[i]);
        i++;
    }

    i = 0;
    printf("Reverse String -: ");
    while (!isEmpty())
    {
        str[i] = pop();
        i++;
    }
    printf("%s", str);

    return 0;
}
