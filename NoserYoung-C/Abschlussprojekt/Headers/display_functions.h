#ifndef DISPLAY_FUNCTIONS_H 
#define DISPLAY_FUNCTIONS_H

#include "Node.h"
#include <stdio.h>

void display_list_node_by_node_number(int node_number,   TNode* head) {
    TNode* current = head;
    int count = 1;
    while (current != NULL) {
        if (count == node_number) {
            printf("Node feld1: %d, feld2: %c\n", current->feld1, current->feld2);
            return;
        }
        current = current->next;
        count++;
    }
    printf("Node not found.\n");
}

void display_list_node_by_node_data(int feld1,  TNode* head) {
    TNode* current = head;
    while (current != NULL) {
        if (current->feld1 == feld1) {
            printf("Node feld1: %d, feld2: %c\n", current->feld1, current->feld2);
            return;
        }
        current = current->next;
    }
    printf("Node not found.\n");
}

void link_nodes(TNode* first, TNode* second) {
	if (first != NULL) {
		first->next = second;
	}
}

void print_list(TNode* head) {
	TNode* current = head;
    int index = 0;
	while (current != NULL) {
		printf("Node %d: feld1: %d, feld2: %c\n", index, current->feld1, current->feld2);
		current = current->next;
		index++;
	}
}
#endif // DISPLAY_FUNCTIONS_H