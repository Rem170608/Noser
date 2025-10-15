#ifndef LINK_NEW_NODE_H
#define LINK_NEW_NODE_H

#include <stdio.h>
#include <stdlib.h>
#include "Node-creation.h"
#include "Node.h"  


void link_new_node(TNode* head, TNode* new_node) {
    if (head == NULL) {
        printf("The list is empty. Cannot link new node.\n");
        return;
    }
    TNode* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    printf("Linked new node with feld1: %d, feld2: %c\n", new_node->feld1, new_node->feld2); // Print linking information
}
#endif // LINK_NEW_NODE_H
 