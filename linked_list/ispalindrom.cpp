// Check if the linked list in palindrome..

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *insert_at_bottom(Node *head, int data) {
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;

    if (!head)
        return new_node;
    Node *temp = head;

    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return head;
}

void print_list(Node *head){
    while (head

           ) {
        cout << head->data << " ";
        head = head->next;

    }
}


int count(Node *head){
    Node *temp = head;
    int cnt = 0;
    while (temp) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

bool ispalin(Node *head){
    if (!head)
        return false;

    int i=0;
    int cnt = count(head);

    while (i != cnt/2){

          Node *Front = head;
          Node *rear = head;
          for (int j=0; j < i; j++)
                Front = Front->next;
          for (int j=0; j < cnt-(i+1); j++)
                rear = rear->next;
          if (Front->data != rear->data)
                return false;
          else
                i++;
    }
    return true;
}

int main() {

    Node *head = NULL;
    head = insert_at_bottom(head, 2);
    head = insert_at_bottom(head, 1);
    head = insert_at_bottom(head, 2);
    //head = insert_at_bottom(head, 1);
    print_list(head);
    cout << "\n";
    if (ispalin(head))
      cout << "list is palindrome";
    else
        cout << "not palindrome";
    //return 0;
}
