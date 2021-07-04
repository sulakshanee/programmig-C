#include <stdio.h>
#include <conio.h>
#include "stack.h"

int main()
{
    int i, size, a, b;
    Stack A;
    Stack B;
    CreateStack(&A);
    CreateStack(&B);

    printf("Enter size -: ");
    scanf("%d", &size);

    int array[size];

    printf("System generated number set -: ");
    for (i = 0; i < size; i++)
    {
        int num = (rand() % (50 - 0 + 1)) + 0;
        printf("%d ", num);
        array[i] = num;
    }

    // printf("\nA's number set -: ");
    for (i = 0; i < size; i++)
    {
        if (!isFull(&A) && !isFull(&B))
        {
            push(array[i], &A);
            push(array[size - 1 - i], &B);
        }
    }

    printf("\nOutput -: ");
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
            printf("0 ");
            pop(&A);
            pop(&B);
        }
    }

    if (isEmpty(&A))
    {
        printf("\nWinner is A");
    }
    else
    {
        printf("\nWinner is B");
    }

    return 0;
}