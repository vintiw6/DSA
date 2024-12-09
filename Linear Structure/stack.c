#include <stdio.h>
#define MAX 100

// Define the stack structure
struct Stack {
    int arr[MAX];
    int top;
};

// Initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

// Check if stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Push an element onto the stack
void push(struct Stack* stack, int value) {
    if (stack->top < MAX - 1) {
        stack->arr[++stack->top] = value;
        printf("%d pushed onto the stack.\n", value);
    } else {
        printf("Stack overflow!\n");
    }
}

// Pop an element from the stack
int pop(struct Stack* stack) {
    return isEmpty(stack) ? -1 : stack->arr[stack->top--];
}

// Peek the top element of the stack
int peek(struct Stack* stack) {
    return isEmpty(stack) ? -1 : stack->arr[stack->top];
}

// Display the stack elements
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
    } else {
        for (int i = stack->top; i >= 0; i--) {
            printf("%d ", stack->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    display(&stack);

    printf("Popped: %d\n", pop(&stack));
    display(&stack);

    printf("Top: %d\n", peek(&stack));
    return 0;
}
