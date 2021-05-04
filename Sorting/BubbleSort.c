// Replacing the value in the first index with the smallest value in the array and keep it repeating until the list is sorted.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, temp;
    int i, j;

    printf("How many number you want to input -: ");
    scanf("%d", &count);
    int array[count];
    printf("Enter %d integers that has to be sorted -: ", count);
    for (i = 0; i < count; i++)
    {
        scanf("%d ", &array[i]);
    }

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("List of integers sorted in ascending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
