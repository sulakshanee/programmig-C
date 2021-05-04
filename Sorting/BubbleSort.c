// Replacing the value in the first index with the smallest (or largest) value in the array and keep it repeating until the list is sorted.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, temp;
    int i, j;

    printf("How many number you want to input -: ");
    scanf("%d", &count);
    int array_1[count], array_2[count];
    printf("Enter %d integers that has to be sorted -: ", count);
    for (i = 0; i < count; i++)
    {
        scanf("%d ", &array_1[i]);
        array_2[i] = array_1[i];
    }

    // Ascending Order
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (array_1[j] > array_1[j + 1])
            {
                temp = array_1[j];
                array_1[j] = array_1[j + 1];
                array_1[j + 1] = temp;
            }
        }
    }

    printf("List of integers sorted in ascending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array_1[i]);
    }

    // Decending Order
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (array_2[j] < array_2[j + 1])
            {
                temp = array_2[j];
                array_2[j] = array_2[j + 1];
                array_2[j + 1] = temp;
            }
        }
    }

    printf("\nList of integers sorted in decending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array_2[i]);
    }

    return 0;
}
