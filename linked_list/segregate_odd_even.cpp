//  segregate even and odd nodes in a linked list
// time complexity O(n)
// space complexity O(1)

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};



Node *Insert_element_at_end(Node *head, int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    Node *temp = head;

    if (!head)
        return new_node;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    return head;

}

void print_list (Node *head){
    Node *temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

Node *segregate_odd_even(Node *head){
    Node *current = head;
    Node *evenhead = NULL, *lasteven = NULL, *oddhead = NULL, *lastodd = NULL;

    while(current) {
        if (current->data%2){ // odd element
            if (!oddhead){
                oddhead = current;
                lastodd = current;
            }
            else {
                lastodd->next = current;
                lastodd = current;
            }
        }

        else {
            if (!evenhead){
                evenhead = current;
                lasteven = current;
            }
            else {
                lasteven->next = current;
                lasteven = current;
            }
        }
        current = current->next;

    }

    if (evenhead)
        head = evenhead;
    if (lasteven)
        lasteven->next = oddhead;
    if (lastodd)
        lastodd->next = NULL;

    return head;

}

int main(){
    Node *head = NULL;
    head = Insert_element_at_end(head, 1);
    head = Insert_element_at_end(head, 2);
    head = Insert_element_at_end(head, 3);
    head = Insert_element_at_end(head, 5);
    head = Insert_element_at_end(head, 6);
    head = Insert_element_at_end(head, 0);

    head = segregate_odd_even(head);
    print_list(head);
    return 0;
}
