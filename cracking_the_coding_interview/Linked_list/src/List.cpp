#include "List.h"
#include <set>
using namespace std;

void List::Print_List(Node *head) {
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


Node *List::Append(Node *head, int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    Node *tmp = head;
    if ( tmp != NULL ) {

        while ( tmp->next != NULL ) {
            tmp = tmp->next;
    }

        tmp->next = newNode;
    }

    else {

        head = newNode;
    }
    return head;
}

Node *List::reverse_list(Node *head) {
    Node *prev = NULL;
    Node *next = NULL;
    Node *current = head;
    while (current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}


