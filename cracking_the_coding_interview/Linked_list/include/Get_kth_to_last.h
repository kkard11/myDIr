//Return Kth to Last: Implement an algorithm to find the kth to last element of a singly linked list.


#ifndef GET_KTH_TO_LAST_H
#define GET_KTH_TO_LAST_H
#include "List.h"

class Get_kth_to_last
{
    public:
        int getLength(Node *head);
        Node *kthToLast(Node *head, int k);

};

#endif // GET_KTH_TO_LAST_H
