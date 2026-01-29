#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct Stack {
    int* data;
    int topIdx;
    int capacity;
} Stack;


bool stack_isEmpty(Stack* stack);
void stack_push(Stack* stack, int item);
int stack_peek(Stack* stack);
int stack_pop(Stack* stack);
void stack_emptyAndPrint(Stack* stack);

#endif