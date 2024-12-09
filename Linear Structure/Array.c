#include <stdio.h>

#define MAX 10

struct Array {
    int arr[MAX];
    int size;
};

// Function to initialize the array
void initArray(struct Array* a) {
    a->size = 0;
}

// Function to insert an element at the end of the array
void insert(struct Array* a, int value) {
    if (a->size < MAX) {
        a->arr[a->size++] = value;
        printf("%d inserted into the array.\n", value);
    } else {
        printf("Array is full! Cannot insert %d.\n", value);
    }
}

// Function to delete an element by index
void delete(struct Array* a, int index) {
    if (index < 0 || index >= a->size) {
        printf("Invalid index! Cannot delete.\n");
        return;
    }
    for (int i = index; i < a->size - 1; i++) {
        a->arr[i] = a->arr[i + 1];
    }
    a->size--;
    printf("Element at index %d deleted.\n", index);
}

// Function to display the array
void display(struct Array* a) {
    if (a->size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < a->size; i++) {
        printf("%d ", a->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Array a;
    initArray(&a);

    // Insertion
    insert(&a, 10);
    insert(&a, 20);
    insert(&a, 30);
    insert(&a, 40);
    display(&a);

    // Deletion
    delete(&a, 2);
    display(&a);

    return 0;
}
