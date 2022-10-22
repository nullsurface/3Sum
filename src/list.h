#ifndef _LIST_H
#define _LIST_H

struct node {
    int nums[3];
    int* next;
};

typedef struct node Node;

// Pushes triple to the end of the list
void push_end(int* list, struct node);

// Removes triple
void remove(int* list, struct node);

// Returns true if same node is found
void exists(int* list, struct node);

#endif
