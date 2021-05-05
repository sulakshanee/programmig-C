

#include <stdio.h>

void mergeSort(int array_1[], int low, int high)
{
    int m = (low + high) / 2;

    mergeSort(array_1, low, m);
    mergeSort(array_1, m + 1, high);

    int i = low;
    int j = m + 1;
    int k = low;
    int temp[high + 1];

    while (i <= m && j <= high)
    {
        if (array_1[i] < array_1[j])
        {
            temp[k] = array_1[i];
            i++;
        }
        else
        {
            temp[k] = array_1[j];
            j++;
        }
        k++;
    }

    if (i > m)
    {
        while (j <= high)
        {
            temp[k] = array_1[j];
            k++;
            j++;
        }
    }

    else
    {
        while (i <= m)
        {
            temp[k] = array_1[i];
            k++;
            i++;
        }
    }

    k = low;
    while (k <= high)
    {
        array_1[k] = temp[k];
        k++;
    }
}

int main()
{
    int count;
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

    mergeSort(array_1, 0, count - 1);

    printf("List of integers sorted in ascending order -: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", array_1[i]);
    }
}