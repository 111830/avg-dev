#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

/**
 * Create a node ready to be pushed into the
 * stack.
 */

Node* stack_createNode(int value){
    Node* n = (Node*)malloc(sizeof(Node));
    n->value = value;
    n->next = NULL;

    return n;
}

/**
 * push
 *   pushes the vale to the top of the stack
 *     return the reference to the top of the stack
 */

Node* stack_push(Node* head, int value) {
    if (head == NULL){
        head = stack_createNode(value);
        return head;
    }
    
    Node* n = stack_createNode(value);
    n->next = head;
    head = n;

    return head;
}

/**
 * isEmpty
 *  return true if the given stack is empty
 *    false otherwise.
 */

bool stack_isEmpty(Node* head){
    return head == NULL;
}

/**
 *  pop
 *    returns the value at the top of the stack
 *      and removes it from the stack.
 */

int stack_pop(Node** head){
    if(stack_isEmpty(*head)){
        fprintf(stderr, "Cannot pop an empty stack.\n");
        exit(1);
    }
    Node* prevHead = *head;
    *head = (*head)->next;

    int result = prevHead->value;

    // Remove the node from the heap 
    // it is dangling.
    free(prevHead);

    return result;
}

/**
 * peek
 *  return the top of the stack, but does not 
 *    remove the value from the stack.
 */

int stack_peek(Node* head){
    if(stack_isEmpty(head)) {
        fprintf(stderr, "cannot peek at a empty stack.\n");
        exit(1);
    }
    return head->value;
}

void stack_freeList(Node* head){
    Node* t = head;
    while(head != NULL){
        t = head;
        head = head->next;
        free(t);
    }
}

void stack_printLinkedList(Node* head){
    Node* t = head;
    while (t != NULL){
        printf("%d -> ", t->value);
        t = t->next;
    }
    printf("NULL\n");
}
