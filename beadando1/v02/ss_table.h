#include<iostream>
#include<vector>
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


void print_t(table<int> M){
 cout << "A tablazat tartalma:" << endl;
 int a = M.data.size();
 int b = M.data[a].size();
 for (int i = 0; i < a; i++){
  for (int j = 0; j < b; j++){
   cout << M.data[i][j] << " ";
  }
  cout << endl;
 }
 cout << endl;
};

