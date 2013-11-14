#include<iostream>
#include<vector>
#include<fstream>
#include<stdlib.h>
using namespace std;


template <typename T>
struct table{
 //matrix-table for store only
 
 int row, col;
 vector< vector<T> > data;
 table(int rows, int cols)
 : row(rows)
 , col(cols)
 , data(row, vector<T>(col, 0)){}
};


namespace bead1{

template<typename S>
void print_t(const table<S>&);

void read_std(table<int>&);

void read_file(table<int>&);
}
