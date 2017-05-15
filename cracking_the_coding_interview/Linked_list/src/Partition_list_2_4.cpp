#include "Partition_list_2_4.h"

Node *Partition_list_2_4::partition_list(Node *head, int x) {
    Node *greater_head = NULL;
    Node *greater_lasthead = NULL;

    Node *less_head = NULL;
    Node *less_lasthead = NULL;

    Node *equal_head = NULL;
    Node *equal_lasthead = NULL;

    Node *temp = head;

    while (temp) {
        if (temp->data > x) {
            if (greater_head == NULL) {
                greater_head = temp;
                greater_lasthead = temp;
            }
            else {
                greater_lasthead->next = temp;
                greater_lasthead = greater_lasthead->next;
            }

        }
        else if (temp->data < x) {
            if (less_head == NULL) {
                less_head = temp;
                less_lasthead = temp;
            }
            else {
                less_lasthead->next = temp;
                less_lasthead = less_lasthead->next;
            }
        }
        else if (temp->data == x) {
            if (equal_head == NULL) {
                equal_head = temp;
                equal_lasthead = temp;
            }
            else {
                equal_lasthead->next = temp;
                equal_lasthead = equal_lasthead->next;
            }
        }
        temp = temp->next;
    }
    // will finish tomorrow

    if (greater_lasthead != NULL)
        greater_lasthead->next = NULL;

    if (less_head == NULL)
    {

        if (equal_head == NULL)
            return greater_head;

        equal_lasthead->next = greater_head;
        return equal_head;
    }

    if (equal_head == NULL)
    {
        less_lasthead->next = greater_head;
        return less_head;
    }

    less_lasthead->next = equal_head;
    equal_lasthead->next = greater_head;
    return less_head;
}
