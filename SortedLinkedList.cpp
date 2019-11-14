//
// Created by Henry Evans on 11/7/19.
//

#include "SortedLinkedList.h"


void SortedLinkedList :: insertSorted(Data object) {
    Node* n=new Node(object,nullptr);

    Node *curr;
    Node* prev;
    if (head == nullptr) {
       n->next=head;
       head=n;
    }
    else {
        if(n->data < head->data){
            n->next=head;
            head=n;
        }
        else {

            curr = head;
            while (curr != nullptr && curr->data < n->data) {
                cout << ";" << endl;
                prev = curr;
                curr = curr->next;

            }

            prev->next = n;
            n->next = curr;
        }


    }


}
