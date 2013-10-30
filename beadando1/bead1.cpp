#include<iostream>
#include<vector>

#include "ss_table.h"
using namespace std;



/*
//template <typename T>
struct matrix{
 //matrix for store only

 int col, row;
 vector<int> data;
 matrix(int columns, int rows):
 col(columns), row(rows), data (col*row){};
 vector<int>::iterator it = data.begin();
 while(it != data.end()){
  *it=0;
  it++;
 }
};




template <typename T>
struct table{
 //matrix-table for store only
 
 int col, row;
 vector< vector<T> > data;
 table(int rows, int cols):
 col(cols) , row(rows) , data(row, vector<T>(col, 0)){}
  
};
*/
template<typename T>
struct table;


int main(int args, char* argv[]){
  //struct matrix
  table<int> M(4,5);
  M.data[1][3] = 5;
  M.data[1][3]%= 3;
  cout << "Eddig OK?";
  for (int i = 0; i < 4-1; i++){
   for(int j=0; j<5-1; j++){ 
    cout << M.data[i][j] << " ";
   }
  }
  print_t(M);
  //reader
  //searcher
 return 0;
}
