#include "remove_dup_2_1.h"
#include <set>
#include <iostream>

using namespace std;


Node *remove_dup_2_1::remove_duplicate_with_buffer(Node *head) {
    set<int> myset;
    set<int>::iterator itr;

    Node *temp = head;
    while (temp) {
        itr = myset.find(temp->data);

        if (itr != myset.end()){
            myset.insert(temp->data);
        }
        else {
            temp = temp->next;
        }
    }
    return head;
}

Node *remove_dup_2_1::removeDuplicates(Node *head) {
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
