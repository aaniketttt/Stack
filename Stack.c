// stack.c
#include "stack.h"
#include <stdio.h>

// Initialize a stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Check if the stack is empty
bool isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

// Check if the stack is full
bool isFull(struct Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow: Cannot push %d onto the stack.\n", value);
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

// Pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop from an empty stack.\n");
        return -1; // Return a sentinel value to indicate failure
    }
    return stack->arr[stack->top--];
}
