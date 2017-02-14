//Delete Middle Node: Implement an algorithm to delete a node in the middle (i.e., any node but
//the first and last node, not necessarily the exact middle) of a singly linked list, given only access to
//that node.
//EXAMPLE
//lnput:the node c from the linked list a->b->c->d->e->f
//Result: nothing is returned, but the new linked list looks like a ->b->d- >e- >f




#ifndef DELETE_MIDDLE_NODE_2_3_H
#define DELETE_MIDDLE_NODE_2_3_H
#include "List.h"
using namespace std;

class Delete_middle_node_2_3
{
    public:

        // This method will not remove the last node
        void delete_middle_node(Node *node);
};

#endif // DELETE_MIDDLE_NODE_2_3_H
