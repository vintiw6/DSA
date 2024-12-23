#include <stdio.h>
#define MAX 5

// Define the queue structure
struct Queue {
    int arr[MAX];
    int front;
    int rear;
};

// Initialize the queue
void initQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Check if the queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

// Check if the queue is full
int isFull(struct Queue* queue) {
    return queue->rear == MAX - 1;
}

// Enqueue (insert) an element into the queue
void enqueue(struct Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full! Cannot enqueue %d.\n", value);
        return;
    }
    if (queue->front == -1) {
        queue->front = 0; // First element inserted
    }
    queue->arr[++queue->rear] = value;
    printf("%d enqueued.\n", value);
}

// Dequeue (remove) an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int value = queue->arr[queue->front];
    if (queue->front == queue->rear) { // Only one element in the queue
        queue->front = queue->rear = -1; // Reset queue
    } else {
        queue->front++;
    }
    return value;
}

// Peek the front element of the queue
int peek(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty! Nothing to peek.\n");
        return -1;
    }
    return queue->arr[queue->front];
}

// Display the queue elements
void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Queue queue;
    initQueue(&queue);

    // Perform queue operations
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    display(&queue);

    printf("Dequeued: %d\n", dequeue(&queue));
    display(&queue);

    printf("Front element: %d\n", peek(&queue));
    display(&queue);

    return 0;
}
