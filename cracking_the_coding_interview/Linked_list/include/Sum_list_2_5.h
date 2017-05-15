//Sum Lists: You have two numbers represented by a linked list, where each node contains a single
//digit. The digits are stored in reverse order, such that the 1 's digit is at the head of the list. Write a
//function that adds the two numbers and returns the sum as a linked list.
//EXAMPLE
//Input: (7-> 1 -> 6) + (5 -> 9 -> 2).That is,617 + 295.
//Output: 2 -> 1 -> 9. That is, 912.
//FOLLOW UP
//Suppose the digits are stored in forward order. Repeat the above problem.
//Input: (6 -> 1 -> 7) + (2 -> 9 -> 5).That is,617 + 295.
//Output: 9 -> 1 -> 2. That is, 912.


#ifndef SUM_LIST_2_5_H
#define SUM_LIST_2_5_H
#include "List.h"
#include "Get_kth_to_last.h"
#include <stdlib.h>

class Sum_list_2_5
{
    public:
        // input will be inserted in reverse

        Node *sum_two_list(Node *head1, Node *head2);

        // This method will be used to append 0 if two lists are not of same length.
        // It will return the list with appending zero who has lesser length.

        Node *append_zero(Node *head, int d);

};

#endif // SUM_LIST_2_5_H
