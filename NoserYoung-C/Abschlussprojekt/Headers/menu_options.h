
#ifndef MENU_OPTIONS_H
#define MENU_OPTIONS_H

#include "./v-counter.h"
#include "./Node-creation.h"
#include "./Node.h"
#include "./display_functions.h"
#include "./delete_node_at_index.h"
#include "./link_new_node.h"
#include "./edit_node_at_index.h"
#include "./add_to_list_at_index.h"
#include "./Overwrite_all.h"
#include "./length_calc.h"
#include "./delete_all_from_list.h"
#include "./free_memmory_on_shutdown.h"

static const char* menu_options[] = {
    "Quit",
    "Print all nodes",
    "Print node by number",
    "Create custom user node and add to head List",
    "Create Custom user node",
    "Delete node by index",
    "Edit node at index",
    "Add node at index",
    "Overwrite all nodes",
    "Calculate list length",
    "Delete all from list"
    //"Show version"
};
static const int num_options = sizeof(menu_options) / sizeof(menu_options[0]);


void display_menu(TNode* node1) {

TNode* head = node1;

int choice = -1, num, data;
    while (choice != 0) {
        printf("Menu:\n");
        for (int i = 1; i < num_options; ++i) {
            printf("%d. %s\n", i, menu_options[i]);
        }
        printf("0. %s\n", menu_options[0]);
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: // Print all nodes
                print_list(head);
                break;
            case 2: // Print node by number
                printf("Enter node number: ");
                scanf("%d", &num);
                display_list_node_by_node_number(num, head);
                break;; 
            case 3: // Create custom user node and add to head List
                {
                int feld1;
                char feld2;
                printf("Enter feld1 (int): ");
                scanf("%d", &feld1);
                printf("Enter feld2 (char): ");
                scanf(" %c", &feld2);
                link_new_node(head, create_custom_user_node_with_data(feld1, feld2));
                }
                break;
            case 4: // Create Custom user node
                {
                int feld1;
                char feld2;
                printf("Enter feld1 (int): ");
                scanf("%d", &feld1);
                printf("Enter feld2 (char): ");
                scanf(" %c", &feld2);
                create_custom_user_node_with_data(feld1, feld2);
                }
                break;
            case 5: // Delete node by index
                {
                    int index;
                    printf("Enter index to delete: ");
                    scanf("%d", &index);
                    delete_node_at_index(&head, index);
                }
                break;
            case 6: // Edit node at index
                {
                int feld1;
                char feld2;
                int index;
                printf("Enter feld1 (int): ");
                scanf("%d", &feld1);
                printf("Enter feld2 (char): ");
                scanf(" %c", &feld2);
                printf("Enter index to edit the node at: ");
                scanf("%d", &index);
                edit_node_at_index(&head, feld1, feld2, index);
                }
                break;
            case 7: // Add node at index
                {
                int feld1;
                char feld2;
                int index;
                printf("Enter feld1 (int): ");
                scanf("%d", &feld1);
                printf("Enter feld2 (char): ");
                scanf(" %c", &feld2);
                printf("Enter index to add the node at: ");
                scanf("%d", &index);
                head = add_node_to_list_at_index(&head, index, create_custom_user_node_with_data(feld1, feld2));
                }
                break;
            case 8: // Overwrite all nodes
                {
                int new_feld1;
                char new_feld2;
                overwrite_all_nodes(head, new_feld1, new_feld2);
                }
                break;
            case 9: // Calculate list length
                calculate_list_length(head);
                break;
            case 10:
                delete_all_from_list(&head);
                break;
            case 0:
                printf("The End?\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    free_memory_on_shutdown(&head);
}
#endif // MENU_OPTIONS_H