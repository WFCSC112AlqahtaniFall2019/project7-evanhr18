//
// Created by Henry Evans on 11/7/19.
//

#include "LinkedList.h"

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H

#endif //PROJECT7_STACK_H

class Stack : public LinkedList {
public:
    void push_head(Data object);
    bool pop_head();
    Stack();
    Node* first = nullptr;

};