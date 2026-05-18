#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int is_empty(struct Stack *stack) {
    return stack->top == -1;
}

int is_full(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int item) {
    if (is_full(stack)) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = item;
}

int pop(struct Stack *stack) {
    if (is_empty(stack)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}

void print_stack(struct Stack *stack) {
    if (is_empty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

void delete_middle(struct Stack *stack) {
    int size = stack->top + 1;
    int mid = size / 2;

    // Move elements to a temporary stack until the middle
    struct Stack temp;
    initialize(&temp);
    for (int i = 0; i < mid; i++) {
        push(&temp, pop(stack));
    }

    // Pop the middle element
    pop(stack);

    // Move elements back from the temporary stack
    while (!is_empty(&temp)) {
        push(stack, pop(&temp));
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    // Insert: 5, 4, 12, 2
    push(&stack, 5);
    push(&stack, 4);
    push(&stack, 12);
    push(&stack, 2);

    // Print
    print_stack(&stack);

    // Insert: 10
    push(&stack, 10);

    // Delete middle element
    delete_middle(&stack);

    // Print
    print_stack(&stack);

    return 0;
}