#include <stdio.h>
#define n 5

int main()
{
    int array[n];
    int front = 0, rare = 0, x = 1, i = 0;

    printf("--- Disply Choices---\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");

    while (x)
    {
    	printf("Enter Your Choice-: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            if (rare == n)
            {
                printf("Queue is Full\n");
            }
            else
            {
            	printf("Enter the number-: ");
                scanf("%d", &array[rare]);
                rare++;
            }
            break;

        case 2:
            if (rare == 0)
            {
                printf("Queue is Empty\n");
            }
            else
            {
                printf("Deleted number is-: %d\n", array[rare-1]);
                rare--;
            }
            break;

        case 3:
            if (rare == 0)
            {
                printf("Queue is Empty\n");
            }
            else
            {
                for (i = 0; i < rare; i++)
                {
                    printf("%d ", array[i]);
                }
                printf("\n");
            }
            break;

        case 4:
            exit(0);
        default:
            printf("Wrong Choice. Please see the choices.\n");
        }
    }

    return 0;
}
