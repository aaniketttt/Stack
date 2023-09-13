// stack.h
#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX_SIZE 100

// Structure to represent a stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Function prototypes
void initialize(struct Stack* stack);
bool isEmpty(struct Stack* stack);
bool isFull(struct Stack* stack);
void push(struct Stack* stack, int value);
int pop(struct Stack* stack);

#endif // STACK_H
