#include <iostream>
#include <fstream>
#include "Queue.h"
#include "Stack.h"
#include "Data.h"
#include "SortedLinkedList.h"
#include "LinkedList.h"
using namespace std;

int main() {

    ifstream in;
    ofstream out;
    string firstName;
    string lastName;
    string name;
    string pts;
    string rebs;
    string ast;
    string blk;
    Stack* data = new Stack();
    Queue* queueData = new Queue();
    SortedLinkedList dataList;

    in.open("../NBA Projected Stats 2019.csv");
    if (!in.is_open()) {
        cout << "Could not open input file" << endl;
        return 1;
    }
    out.open("../stacked.txt");
    if (!out.is_open()) {
        cout << "Could not open stacked file" << endl;
        return 1;
    }

    cout << "Reading input file" << endl;

    while (!in.eof()) {
        in >> firstName;
        in >> lastName;
        in >> pts;
        in >> rebs;
        in >> ast;
        in >> blk;

        name = firstName + " " + lastName;

        Data object(name, stoi(pts), stoi(rebs), stoi(ast), stoi(blk));
        data->push_head(object);
        dataList.insertSorted(object);
        queueData->enqueue_tail(object);
    }

    in.close();

    data->print(out);


    out.open("../queued.txt");
    if (!out.is_open()) {
        cout << "Could not open queued file" << endl;
        return 1;
    }


    queueData->print(out);
    out.close();

    ofstream out2;
    out2.open("../sorted.txt");
    if (!out2.is_open()) {
        cout << "Could not open sorted file" << endl;
        return 1;
    }



    dataList.print(out2);
    out2.close();





    return 0;
}