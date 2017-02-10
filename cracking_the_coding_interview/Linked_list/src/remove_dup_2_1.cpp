#include "remove_dup_2_1.h"
#include <map>
#include <iostream>

using namespace std;


Node *remove_dup_2_1::remove_duplicate_with_buffer(Node *head) {
    if (head == NULL)
        return NULL;
    map<int,bool> hashtable;
    Node *temp = head;
    hashtable[head->data] = true;  // for the first element
    Node *dup = NULL;
    while (temp->next != NULL) {

        // check the entry
        if (hashtable[temp->next->data] != true)
        {
            hashtable[temp->next->data] = true;
            //cout << temp->data << " ";
            temp = temp->next;
        }

        // if entry is already there then remove the node
        else
        {
            dup = temp->next;
            temp->next  = temp->next->next;
            delete dup;
        }
    }

    return head;
}

Node *remove_dup_2_1::removeDuplicates(Node *head) {
    if (head == NULL)
    return NULL;
    Node *temp1, *temp2, *dup;
    temp1 = head;
    while (temp1->next != NULL) {
        temp2 = temp1;
        while (temp2->next != NULL) {
            if (temp1->data == temp2->next->data) {
                dup = temp2->next;
                temp2->next = temp2->next->next;
                delete dup;
            }
            else
                temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return head;
}
