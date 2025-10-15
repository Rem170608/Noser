#ifndef FREE_MEMORY_ON_SHUTDOWN_H
#define FREE_MEMORY_ON_SHUTDOWN_H

#include "Node.h"
#include <stdlib.h>
#include <stdio.h>

void free_memory_on_shutdown(TNode** head) {
    TNode* current = *head;
    TNode* next_node;
    if (current == NULL) {
        printf("No memory to free, list is already empty.\n");
        return;
    }
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    *head = NULL;
    printf("All allocated memory has been freed on shutdown.\n");
}
#endif // FREE_MEMORY_ON_SHUTDOWN_H