#include <stdio.h>
#include <string.h>

void countingSort(int arr[], int n) {
    int output[n]; 
    int max = arr[0];

    // Find the maximum element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max + 1]; 
    memset(count, 0, sizeof(count)); 

    // Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Update the count array to store cumulative sums
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back into the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

