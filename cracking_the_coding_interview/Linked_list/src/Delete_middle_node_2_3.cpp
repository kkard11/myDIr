#include "Delete_middle_node_2_3.h"


// This method will not remove the last node
// Also I think this is buggy solution it is creating memory leak

void Delete_middle_node_2_3::delete_middle_node(Node *node) {
    if (node == NULL || node->next == NULL)
        return;

    Node *temp = node->next;
    cout << "let's delete\n" << node->data << "\n";
    //temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    delete  temp;
}
