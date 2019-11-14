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
        in >> name;
        in >> pts;
        in >> rebs;
        in >> ast;
        in >> blk;
        Data* object = new Data(name, stoi(pts), stoi(rebs), stoi(ast), stoi(blk));
        data->push_head(*object);
    }

    in.close();

    cout << "Writing data in stack" << endl;

    data->print(out);

    while (data->pop_head()) {}
    out.close();

    out.open("../queued.txt");
    if (!out.is_open()) {
        cout << "Could not open queued file" << endl;
        return 1;
    }
    in.open("../NBA Projected Stats 2019.csv");
    if (!in.is_open()) {
        cout << "Could not open input file" << endl;
        return 1;
    }
    while (!in.eof()) {
        in >> name;
        in >> pts;
        in >> rebs;
        in >> ast;
        in >> blk;
        Data* object = new Data(name, stoi(pts), stoi(rebs), stoi(ast), stoi(blk));
        queueData->enqueue_tail(*object);
    }

    queueData->print(out);
    while (queueData->dequeue_head()) {}
    out.close();

    in.open("../NBA Projected Stats 2019.csv");
    if (!out.is_open()) {
        cout << "Could not open input file" << endl;
        return 1;
    }
    out.open("../sorted.txt");
    if (!out.is_open()) {
        cout << "Could not open sorted file" << endl;
        return 1;
    }

    while (!in.eof()) {
        in >> name;
        in >> pts;
        in >> rebs;
        in >> ast;
        in >> blk;
        Data* object = new Data(name, stoi(pts), stoi(rebs), stoi(ast), stoi(blk));
        dataList.insertSorted(*object);
    }

    in.close();

    dataList.print(out);
    out.close();





    return 0;
}