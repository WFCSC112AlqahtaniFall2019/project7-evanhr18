//
// Created by Henry Evans on 11/7/19.
//

#include "Queue.h"

Queue :: Queue() {
    first = nullptr;
    tail = nullptr;
}

void Queue ::enqueue_tail(Data insert) {
    Node* temp = new Node(insert);
    if(first == nullptr){
        temp->next = nullptr;
        tail = temp;
        first = tail;
        head = first;
    }
    else {
        temp->next = tail;
        tail = temp;
    }
}

bool Queue::dequeue_head() {
    if(first == nullptr) {
        cout << "called once" << endl;
    }
    else if(first == tail) {
        Node* t = first;
        first = tail = nullptr;
        delete t;

    }
    else {
        Node* t = first;
        Node* s = tail;
        while(s->next != first) {
            s = s->next;
        }
        first = s;
        s->next = nullptr;
        delete t;

    }
    head = first;
}