#ifndef ADD_TO_LIST_AT_INDEX_H
#define ADD_TO_LIST_AT_INDEX_H

#include "Node.h"
#include <stdlib.h> 
#include <stdio.h>



TNode * add_node_to_list_at_index(TNode **head, int index, TNode *new_node) {
    
    if (index < 0) {
        printf("Invalid index. Must be non-negative.\n");
        return *head;
    }
    // If adding at the head, adjust head pointer.
    if (index == 0) {
        new_node->next = *head;

        *head = new_node;
        return new_node;
    }

    TNode *current = *head;
    int current_index = 0;

    // Got to the node just before the desired index
    while (current && current_index < index - 2) {
        current = current->next;
        current_index++;
    }
    // If it reached the desired index, insert the new node
    if (current_index == index - 2) {
        new_node->next = current->next;
        current->next = new_node;
        
    } else {
        // If index is out of bounds, add to the end
        while (current && current->next) {
            current = current->next;
        }
        current->next = new_node;
    }
    return *head;
}
#endif // ADD_TO_LIST_AT_INDEX_H