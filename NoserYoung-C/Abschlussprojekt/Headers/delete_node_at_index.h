#ifndef DELETE_NODE_AT_INDEX_H
#define DELETE_NODE_AT_INDEX_H

#include "Node.h"
#include "display_functions.h"
#include <stdlib.h>
#include <stdio.h>

void delete_node_at_index(TNode** head, int index) {
    if (*head == NULL || index < 0) {
        printf("Invalid index or empty list.\n");
        return;
    }

    TNode* temp = *head; // create temp Head pointer

    if (index == 0) {
        *head = temp->next;
        free(temp);
        return;
    }


    for (int i = 0; temp != NULL && i < index - 1; i++) {
        temp = temp->next;
    }


    if (temp == NULL || temp->next == NULL) {
        printf("Index out of bounds.\n");
        return;
    }


    TNode* next = temp->next->next;

    free(temp->next);

    temp->next = next; 
}
#endif // DELETE_NODE_AT_INDEX_H
