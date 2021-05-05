#include <stdio.h>

void quickSortAscending(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = array[high];
        int i = low;
        int temp, j;
        for (j = low; j < high; j++)
        {
            if (array[j] < pivot)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
            }
        }
        temp = array[i];
        array[i] = array[high];
        array[high] = temp;

        quickSortAscending(array, low, i - 1);
        quickSortAscending(array, i + 1, high);
    }
}

void quickSortDecending(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot = array[high];
        int i = low;
        int temp, j;
        for (j = low; j < high; j++)
        {
            if (array[j] > pivot)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
            }
        }
        temp = array[i];
        array[i] = array[high];
        array[high] = temp;

        quickSortDecending(array, low, i - 1);
        quickSortDecending(array, i + 1, high);
    }
}

int main()
{
    int count, low, high;
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

    low = 0;
    high = count - 1;

    // Ascending Order
    quickSortAscending(array_1, low, high);
    printf("List of integers sorted in ascending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array_1[i]);
    }

    // Ascending Order
    quickSortDecending(array_2, low, high);
    printf("\nList of integers sorted in decending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array_2[i]);
    }

    return 0;
}
