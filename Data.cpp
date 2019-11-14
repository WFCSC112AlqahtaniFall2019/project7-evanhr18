//
// Created by Henry Evans on 11/7/19.
//
#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H
#include <iostream>

#endif //PROJECT7_DATA_H
#include "Data.h"
using namespace std;

ostream& operator << (ostream &out, const Data& print)
{

    out << "Name: " << print.playerName << endl;
    out << "Points: " << print.points << endl;
    out << "Rebounds: " << print.rebounds << endl;
    out << "Assists: " << print.assists << endl;
    out << "Blocks: " << print.blocks << endl;
    return out;

}

bool Data :: operator< (Data & object) {

    return this->points < object.points;

}

Data :: Data(std::string name, int pts, int rebs, int ast, int blk) {
    playerName = name;
    points = pts;
    rebounds = rebs;
    assists = ast;
    blocks = blk;
}

Data :: Data() {
    playerName = "";
    points = 0;
    rebounds = 0;
    assists = 0;
    blocks = 0;
}
