#include "list.h"
#include <stdlib.h>

void push_end(Node* list, Node* node) {
    Node* curr_node = list;
    while (curr_node) {
        if(curr_node->next == NULL) 
            curr_node->next = node;
    }
}

void remove(Node* list, Node* node) {    
    Node* curr_node = list;
    while (curr_node) {
        if(curr_node->nums[0] == node->nums[0] && curr_node->nums[1] == node->nums[1]) {
            curr_node->back->next = curr_node->next;
            free(curr_node);
            curr_node=NULL;
        }
    }
}

int exists(Node* list, Node* node) {
    Node* curr_node = list;
    while (curr_node) {
        if(curr_node->nums[0] == node->nums[0] && curr_node->nums[1] == node->nums[1]) {
            return 1;
        }
    }
    
    return 0;
}
