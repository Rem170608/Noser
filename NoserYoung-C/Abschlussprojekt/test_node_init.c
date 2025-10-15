

#include "Headers/menu_options.h"
#include "Headers/Node-creation.h"
#include "Headers/link_new_node.h"
#include "Headers/display_functions.h"
#include <stdio.h>
#include <stdlib.h>

// Version 1.1 -Broken

int main(){

    // Node creation
    TNode* node1 = malloc(sizeof(TNode));
    TNode* node2 = malloc(sizeof(TNode));
    TNode* node3 = malloc(sizeof(TNode));
    if (!node1 || !node2 || !node3) {
        fprintf(stderr, "Memory allocation failed\n");
        free(node1); free(node2); free(node3);
        return 1;
    }
    node1->feld1 = 10; node1->feld2 = 'A';
    node2->feld1 = 20; node2->feld2 = 'B';
    node3->feld1 = 30; node3->feld2 = 'C';
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL; 


    display_menu(node1);
    return 0;
}                                