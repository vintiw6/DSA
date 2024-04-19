#include <stdio.h>

void InsertionSort(int Arr[], int N)
{
    int i, key, j;
    for (j = 2; j < N; j++)
    {
        key = Arr[j];
        i = j - 1;
    }
    while (i > 0 && Arr[i] > key)
    {
        Arr[i + 1] = Arr[i];
        i = i - 1;
    }
    Arr[i + 1] = key;
}