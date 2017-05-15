#include "Sum_list_2_5.h"


Node *Sum_list_2_5::append_zero(Node *head, int d) {
    Node *temp = head;
    List add_zero;


    //std::cout << "\nlen1 = " << len1 << "len2 = " << len2;

    //int d = abs(len1-len2);
    while (temp != NULL){
        std::cout << "org list = " << temp->data << "\n";
        temp = temp->next;
    }

    int i=0;
    while (i < d) {

        head = add_zero.Append(head, 0);
        std::cout << "\nin middle = " << head->data << "\n";
        //head = head->next;
        i++;
    }
    return head;

}

Node *Sum_list_2_5::sum_two_list(Node *head1, Node *head2)
{
    List mylist;
    Get_kth_to_last length;

    int carry = 0, sum =0;
    int carry_flag = false;

    Node *head3 = NULL;

    int len1 = length.getLength(head1);
    int len2 = length.getLength(head2);

    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    else
    {
        int d = abs(len1-len2);
        if (len1 < len2) {
             head1 = this->append_zero(head1, d);
             std::cout << "\nlen1 = " << length.getLength(head1) << " " ;
        }

        else if(len2 < len1) {

            head2 = this->append_zero(head2, d);
            std::cout << "len2 = " << length.getLength(head2) << "\n";
        }



        while (head1 != NULL && head2 != NULL) {
            if (carry){
                sum = head1->data + head2->data + carry;
                carry = 0;
            }
            else
                sum = head1->data + head2->data;

            if (sum > 9) {
                int temp_sum = sum;
                carry = temp_sum/10;
                sum = sum%10;
                carry_flag = true;
                //std::cout << "\nsum: " << sum << " carry : " << carry;
            }

            head3 = mylist.Append(head3, sum);
            head1 = head1->next;
            head2 = head2->next;

        }

        head3 = mylist.Append(head3, carry);

    }

    return head3;
}
