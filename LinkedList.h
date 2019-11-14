/* Class: LinkedList
 * Description: Very basic singly linked List class with single head
 * class for use with Data object. It is meant to be inherited for
 * more complex linked lists. (Comes with Node class.)
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Data.h" //You need to create this

class Node {
public:
    Data data; // object at node
    Node *next; // pointer to next node
    Node(const Data &d, Node *n){
            data = d;
            next= n;}
    Node(const Data &d){
            data = d;
            next= nullptr;}
};

class LinkedList {
protected:
    Node *head;
public:
    LinkedList();
    LinkedList(const LinkedList& list);
    const LinkedList& operator=(LinkedList rhs);
    void print(ostream &os);
    void pop_head();
    ~LinkedList();
};

#endif //LINKEDLIST_H
