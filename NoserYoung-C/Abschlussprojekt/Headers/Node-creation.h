#ifndef NODE_CREATION_H
#define NODE_CREATION_H

#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

TNode*  create_custom_user_node_with_data(int feld1, char feld2) {
    TNode* new_node = (TNode*)malloc(sizeof(TNode));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return 0;
    }
    new_node->feld1 = feld1;
    new_node->feld2 = feld2;
    new_node->next = NULL;

    printf("Created node with feld1: %d, feld2: %c\n", new_node->feld1, new_node->feld2); // Print Node creation information
    return new_node;
}
#endif // NODE_CREATION_H