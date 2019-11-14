//
// Created by Henry Evans on 11/7/19.
//
using namespace std;
#include <iostream>
#pragma once

class Data {
public:
    string playerName;
    int points;
    int rebounds;
    int assists;
    int blocks;
    friend ostream& operator << (ostream &out, const Data& print);
    bool operator< (Data& object);
    Data();
    Data(string name, int pts, int rebs, int ast, int blk);
};
