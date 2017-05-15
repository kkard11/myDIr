#include "Is_palin_2_6.h"

bool Is_palin_2_6::is_list_palin(Node *head)
{
    //ctor
    if (head == NULL)
        return false;

    stack<int> s;
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        s.push(slow->data);

        slow = slow->next;
        fast = fast->next->next;
    }


//    cout << fast << "\n";
//    cout << fast->next << "\n";
//    cout << slow->next;
    // Now if the no of elements are odd then fast will not be null
    // So, essentially following 'if' is the trickiest part

    if (fast != NULL)
        slow = slow->next;

    while (slow->next!=NULL) {

        int stack_data = s.top();

        s.pop();
        if (slow->data != stack_data)
            return false;
        slow = slow->next;
    }

    return true;

}

