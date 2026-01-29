#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int MAX_STACK_SIZE = 10;

// push -> void, pop -> int, peek -> int(dose not alert the stack), isEmpty -> bool

/**
 *  Tell us if the stack is empty
 */
bool isEmpty(int topIdx) {
    if (topIdx == -1){
        return true;
    }
    return false;
}


/**
 * Pushes an element to the stack
 */
void push(int* stack, int item, int *topIdx) {
    if(*topIdx + 1 >= MAX_STACK_SIZE){
        fprintf(stderr, "The stack is full!\n");
        exit(1);
    }
    *topIdx = *topIdx + 1;
    *(stack + *topIdx) = item;
}


/**
 *  Returns whatever is on top of th stack
 */
int peek(int* stack,int topIdx) {
    if(isEmpty(topIdx)){
        fprintf(stderr, "Attempting to peek at on empty stack!\n");
        exit(1);
    }
    return *(stack + topIdx);
}

/**
 * Removes the element at the top of the stack, and returns it.
 */
int pop(int* stack, int *topIdx) {
    if (isEmpty(*topIdx)){
        fprintf(stderr, "Attempting to pop an empty stack!\n");
        exit(1);
    }
    int t = peek(stack, *topIdx);
    *topIdx = *topIdx - 1;
    return t;
}

void emptyStackAndPrint(int* stack, int* topIdx) {
    while (!isEmpty(*topIdx)){
        int popped = pop(stack, topIdx);
        printf("Value popped: %i\n", popped);
    }
    printf("EMPTY STACK!!\n");
}

int main(int argc, char *argv[]) {
    int stack[MAX_STACK_SIZE];
    // Track the top of the stack 
    int topIdx = -1;
    printf("Empty stack? %i\n", isEmpty(topIdx));

    push(stack, 8, &topIdx);
    push(stack, 3, &topIdx);
    push(stack, 6, &topIdx);

    printf("Top of the stack is  %i\n", peek(stack, topIdx));

    printf("Empty stack? %i\n", isEmpty(topIdx));

    int popped = pop(stack, &topIdx);
    printf("Popped: %i, Current top: %i\n", popped, peek(stack, topIdx));

    popped = pop(stack, &topIdx);
    printf("Popped: %i\n", popped);

    printf("Empty stack? %i\n", isEmpty(topIdx));
    
    emptyStackAndPrint(stack, &topIdx);
    
    return 0;
}