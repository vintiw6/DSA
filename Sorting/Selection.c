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
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int N = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    selection(arr, N);

    printf("Sorted Array: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}