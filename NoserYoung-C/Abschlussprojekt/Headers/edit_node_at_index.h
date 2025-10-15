#ifndef EDIT_NODE_AT_INDEX_H
#define EDIT_NODE_AT_INDEX_H

#include "Node.h"
#include <stdlib.h>
#include <stdio.h>

void edit_node_at_index(TNode** head, int feld1, char feld2, int index) {
    if (index < 0) {
        printf("Invalid index.\n");
        return;
    }
    {
    TNode* current = *head;
        for (int i = 0; i < index && current != NULL; i++) {
            current = current->next;
        }
        if (current != NULL) {
            current->feld1 = feld1;
            current->feld2 = feld2;
        } else {
            printf("Index out of bounds.\n");
        }
    }
}
#endif // EDIT_NODE_AT_INDEX_H
