#include <stdio.h>

int main() {
    int elements;
    int key;

    printf("Enter the number of elements:\n");
    scanf("%d", &elements);

    // Validate input to prevent negative or zero elements
    if (elements <= 0) {
        printf("Invalid input: Number of elements must be positive.\n");
        return 1; // Indicate error
    }

    int arr[elements];

    printf("Enter the elements in sorted format:\n");
    for (int i = 0; i < elements; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the searching element: ");
    scanf("%d", &key);

    int l = 0;
    int h = elements - 1; // Corrected index for valid range
    int mid;

    while (l <= h) {
        mid = (l + h) / 2; // Corrected calculation to avoid overflow

        if (arr[mid] == key) {
            printf("%d Present at %d location.\n", key, mid + 1); // Adjusted for 1-based indexing
            return 0; // Indicate success
        } else if (arr[mid] < key) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    printf("Element Not Found.\n");
    return 1; // Indicate unsuccessful search
}
