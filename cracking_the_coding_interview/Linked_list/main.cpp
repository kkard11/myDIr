#include <iostream>
#include "List.h"
#include "remove_dup_2_1.h"
#include "Get_kth_to_last.h"
#include "Delete_middle_node_2_3.h"

using namespace std;


int main()
{
    List list;
    remove_dup_2_1 dup;
    Get_kth_to_last kth_elemnt;
    Delete_middle_node_2_3 del;

    Node *head = NULL;
    Node *temp = NULL;
    head = list.Append(head, 1);
    head = list.Append(head, 3);
    head = list.Append(head, 1);
    head = list.Append(head, 2);
    head = list.Append(head, 4);
    head = list.Append(head, 5);

    cout << "original list\n";
    list.Print_List(head);

    cout << "\nkth from the last element is\n";
    temp = kth_elemnt.kthToLast(head, 1);
    cout << temp->data;

    cout << "\nAfter removing duplicates\n";
    head = dup.remove_duplicate_with_buffer(head);
    list.Print_List(head);

    cout << "\nAfter Deleting given node which is head->next\n";
     del.delete_middle_node(head->next);
        cout << "after deleting given node is \n";
        list.Print_List(head);

    return 0;
}
