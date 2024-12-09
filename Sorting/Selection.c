#include <stdio.h>

void selection(int arr[], int N)
{
    int min_idx, temp;

    for (int i = 0; i < N; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}
