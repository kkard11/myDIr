#include "Get_kth_to_last.h"
#include <iostream>

int Get_kth_to_last::getLength(Node *head) {
    int count = 0;
    Node *temp = head;
    if (head == NULL)
        return 0;

    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
}

// last element is 1
// so 1-2-3-4 and k = 1 then out should be 4

Node  *Get_kth_to_last::kthToLast(Node *head, int k)
{
    //ctor
    Node *temp = head;
    int len = this->getLength(temp);
    for (int i=0; i<len-k; i++){
        temp = temp->next;
    }
    return  temp;

}
