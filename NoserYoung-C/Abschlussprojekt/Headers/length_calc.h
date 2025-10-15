#ifndef LENGTH_CALC_H
#define LENGTH_CALC_H

#include "./Node.h"
#include <stdio.h>
#include <stdlib.h>

void calculate_list_length(TNode* head) {
    int length = 0;
    TNode* current = head;
    while (current != NULL){
        length++;
        current = current->next;
    }
    printf("List length calculated: %d\n", length);
}
#endif // LENGTH_CALC_H