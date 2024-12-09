#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to delete a node by value
void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the node to be deleted is the head node
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the value was not found
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    // Unlink the node and free its memory
    prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;

    // Insert elements into the linked list
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("Linked list: ");
    displayList(head);

    // Delete a node
    printf("Deleting 20 from the list...\n");
    deleteNode(&head, 20);

    printf("Linked list after deletion: ");
    displayList(head);

    return 0;
}
