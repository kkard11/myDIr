#include <iostream>
#include "List.h"
#include "remove_dup_2_1.h"
using namespace std;


int main()
{
    List list;
    remove_dup_2_1 dup;
    Node *head = NULL;
    head = list.Append(head, 1);
    head = list.Append(head, 3);
    head = list.Append(head, 1);
    head = list.Append(head, 1);
    cout << "original list\n";
    list.Print_List(head);
    cout << "\nAfter removing duplicates\n";
    head = dup.removeDuplicates(head);
    list.Print_List(head);
    return 0;
}
