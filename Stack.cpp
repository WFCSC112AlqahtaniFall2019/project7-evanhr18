//
// Created by Henry Evans on 11/7/19.
//

#include "Stack.h"
using namespace std;

Stack :: Stack() {
    first = head;
}

bool Stack ::pop_head() {
    if (head == nullptr){
        cout << "The list is empty" << endl;
        return  false;

    }
    else{
        Node* prev = head;
        head = head->next;
        prev->next = nullptr;
        delete prev;
        return true;
    }
}

void Stack ::push_head(Data object) {
    Node* current = new Node (object, head);
    head = current;
}