#ifndef _LIST_H
#define _LIST_H

typedef struct node Node;

struct node {
    int nums[3];
    Node* next;
    Node* back;
};

// Pushes triple to the end of the list
void push_end(Node* list, Node* node);

// Removes triple
void remove(Node* list, Node* node);

// Returns true if same node is found
int exists(Node* list, Node* node);

#endif
