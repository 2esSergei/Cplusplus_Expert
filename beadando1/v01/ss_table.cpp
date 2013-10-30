#include<iostream>
#include<vector>
#include "ss_table.h"
using namespace std;

template <typename T>
struct table{
 //matrix-table for store only
 
 int col, row;
 vector< vector<T> > data;
 table(int rows, int cols)
 : col(cols)
 , row(rows)
 , data(row, vector<T>(col, 0)){}
};

void print_t(table M<int>){
 vector<int>::iterator it = M.data.begin();
 while (it != M.data.end()){
  vector<int>::iterator it2 = M.data[M.data.begin() - it].begin();
  while (it2 != M.data[M.data.begin() - it].end(){
   cout << *it2 << " ";
   it2++;
  }
  it++;
 }
 cout << endl;
};
