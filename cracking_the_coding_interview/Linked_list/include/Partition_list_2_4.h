//Partition: Write code to partition a linked list around a value x, such that all nodes less than x come
//before all nodes greater than or equal to x. If x is contained within the list the values of x only need
//to be after the elements less than x (see below). The partition element x can appear anywhere in the
//"right partition"; it does not need to appear between the left and right partitions.
//EXAMPLE
//Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition= 5]
//Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8



#ifndef PARTITION_LIST_2_4_H
#define PARTITION_LIST_2_4_H
#include "List.h"

class Partition_list_2_4
{
    public:
        Node *partition_list (Node *head, int x);

};

#endif // PARTITION_LIST_2_4_H
