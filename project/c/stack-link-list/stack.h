#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node* next;
}Node;

Node* stack_createNode(int value);
Node* stack_push(Node* head, int value);
bool stack_isEmpty(Node* head);
int stack_pop(Node** head);
int stack_peek(Node* head);
void stack_freeList(Node* head);
void stack_printLinkedList(Node* head);

#endif
