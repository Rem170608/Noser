#ifndef OVERWRITE_ALL_H
#define OVERWRITE_ALL_H

#include "./Node.h"

void overwrite_all_nodes(TNode* head, int new_feld1, char new_feld2) {
    TNode* current = head;
    while (current != NULL) {
        current->feld1 = new_feld1;
        current->feld2 = new_feld2;
        current = current->next;
    }
}
#endif // OVERWRITE_ALL_H