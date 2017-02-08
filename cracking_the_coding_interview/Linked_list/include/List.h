#ifndef LIST_H
#define LIST_H
#include <iostream>
struct Node {
    int data;
    Node *next;
};

class List
{
    public:
        Node *head;
        List() {head = NULL; };
        void Print_List(Node *head);
        Node *Append(Node *head, int data);
        Node *reverse_list(Node *head);


};

#endif // LIST_H
