#include <stdio.h>

int bubble(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int N = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    bubble(arr, N);

    printf("\nSorted array: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}