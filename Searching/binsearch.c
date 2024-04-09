#include <stdio.h>

int main() {
    int elements , mid , key;
    int l = 0;
    int h = elements - 1;


    printf("Enter the number of elements:\n");
    scanf("%d", &elements); 
    if (elements <= 0) {
        printf("Invalid input: Number of elements must be positive.\n");
        return 1; 
    }

    int arr[elements];
    printf("Enter the elements in sorted format:\n");
    for (int i = 0; i < elements; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the searching element: ");
    scanf("%d", &key);
    while (l <= h) {
        mid = (l + h) / 2;

        if (arr[mid] == key) {
            printf("%d Present at %d location.\n", key, mid + 1); 
            return 0;
        } else if (arr[mid] < key) {
            l = mid + 1;
        } else if (arr[mid] > key){
            h = mid - 1;
        } else {
             printf("Element Not Found.\n");
             return 1; 
        }
    }
   return 0;
}