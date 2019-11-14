//
// Created by Henry Evans on 11/7/19.
//

#include "SortedLinkedList.h"

void SortedLinkedList :: insertSorted(Data object) {
    if (head == nullptr) {
        head = new Node(object);
    }
    else {
        Node *curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = new Node(object);
    }
}
void SortedLinkedList :: insertionSort() {
    Node* current = head->next;
    while (current != nullptr) {
        Data temp = current->data;
        int i = 0;
        Node* previous = head;
        while (previous != current) {
            if (previous->data > current->data && i == 0) {
                temp = previous->data;
                previous->data = current->data;
                i = 1;
                previous = previous->next;
            }
            else {
                if (i == 1) {
                    Data x = temp;
                    temp = previous->data;
                    previous->data = x;
                }
                previous = previous->next;
            }
        }
        previous->data = temp;
        current = current->next;
    }
}
