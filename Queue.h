//
// Created by Henry Evans on 11/7/19.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#endif //PROJECT7_QUEUE_H
#include "LinkedList.h"


class Queue : public LinkedList {
public:
    Queue();
    void enqueue_tail(Data insert);
    bool dequeue_head ();
private:
    Node* tail;
    Node* first;
};