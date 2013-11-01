#include<iostream>
#include<vector>
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

template<typename R>
void print_t(table<R>& M){
 cout << "A tablazat tartalma:" << endl;
 for (int i = 0; i < M.data[0].size(); i++){
  for (int j = 0; j < M.data.size(); j++){
   cout << M.data[i][j] << " ";
  }
  cout << endl;
 }
 cout << endl;
};

