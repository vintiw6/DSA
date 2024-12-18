#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1) {
        return -1;
    }
    else {
        return stack[top--];
    }
}

int priority(char c) {
    if (c == '^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

int main() {
    char exp[20];
    char *e, x;

    printf("Enter the infix expression: ");
    scanf("%s", exp);
    e = exp;

    while (*e != '\0') {
        if (isalnum(*e)) {
            printf("%c", *e); // Operand (alphanumeric) is directly printed
        }
        else if (*e == '(') {
            push(*e); // Push '(' to stack
        }
        else if (*e == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x); // Pop and print until '(' is found
            }
        }
        else { // Operator
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c", pop()); // Pop higher or equal precedence operators
            }
            push(*e); // Push the current operator
        }
        e++;
    }

    while (top != -1) {
        printf("%c", pop()); // Pop all remaining operators
    }

    return 0;
}
