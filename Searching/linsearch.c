#include <stdio.h>
int Linsearch(int arr[], int elements, int target)
{
    for (int i = 0; i < elements; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int elements = sizeof(arr) / sizeof(arr[0]);
    int target = 40;
    int result = Linsearch(arr, elements, target);
    if (result != -1)
    {
        printf("The given %d element is present at Index: %d", target, result);
    }
    else
    {
        printf("Error");
    }
    return 0;
}