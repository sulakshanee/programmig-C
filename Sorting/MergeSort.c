

#include <stdio.h>

void mergeSort(int array_1[], int low, int high)
{
    if (low < high)
    {
        int m = (low + high) / 2;

        mergeSort(array_1, low, m);
        mergeSort(array_1, m + 1, high);

        int i = 0;
        int j = 0;
        int n1 = m - low + 1;
        int n2 = high - m;

        int arr_1[n1];
        int arr_2[n2];

        while (i < n1)
        {
            arr_1[i] = array_1[low + i];
            i++;
        }

        while (j < n2)
        {
            arr_2[j] = array_1[m + 1 + j];
            j++;
        }

        i = 0;
        j = 0;
        int k = low;

        while (i < n1 && j < n2)
        {
            if (arr_1[i] < arr_2[j])
            {
                array_1[k] = arr_1[i];
                i++;
            }
            else
            {
                array_1[k] = arr_2[j];
                j++;
            }
            k++;
        }

        while (j < n2)
        {
            array_1[k] = arr_2[j];
            j++;
            k++;
        }

        while (i < n1)
        {
            array_1[k] = arr_1[i];
            i++;
            k++;
        }
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