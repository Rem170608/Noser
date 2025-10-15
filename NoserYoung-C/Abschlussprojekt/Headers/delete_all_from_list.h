#ifndef DELETE_ALL_FROM_LIST_H
#define DELETE_ALL_FROM_LIST_H

#include "Node.h"
#include <stdlib.h>
#include <stdio.h>

void delete_all_from_list(TNode** head) {
    TNode* current = *head;
    TNode* next_node;
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    *head = NULL;
    printf("All nodes deleted from the list.\n");
}
#endif // DELETE_ALL_FROM_LIST_H