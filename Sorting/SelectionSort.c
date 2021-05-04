//Repeatedly finding the minimum element (or maximum element) from unsorted part and putting it at the beginning.
//Already sorted array and unsorted array are the two subarrays in a given array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, temp, minimum, maximum;
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
        minimum = i;
        for (j = i + 1; j < count; j++)
        {
            if (array_1[j] < array_1[minimum])
            {
                minimum = j;
            }
        }
        temp = array_1[i];
        array_1[i] = array_1[minimum];
        array_1[minimum] = temp;
    }

    printf("List of integers sorted in ascending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array_1[i]);
    }

    // Decending Order
    for (i = 0; i < count - 1; i++)
    {
        maximum = i;
        for (j = i + 1; j < count; j++)
        {
            if (array_2[j] > array_2[maximum])
            {
                maximum = j;
            }
        }
        temp = array_2[i];
        array_2[i] = array_2[maximum];
        array_2[maximum] = temp;
    }

    printf("\nList of integers sorted in decending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array_2[i]);
    }

    return 0;
}