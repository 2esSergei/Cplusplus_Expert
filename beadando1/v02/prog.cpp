#include<iostream>
#include<vector>

#include "ss_table.h"
using namespace std;



template<typename T>
struct table;


int main(int args, char* argv[]){
  //struct matrix
  table<float> M(5,4);
  for(int i=0; i<5; i++){M.data[i][0] = 0.5;}
  cout << "Eddig OK? " << M.data.size() << " " << M.data[0].size() << " " << M.row << " " << M.col << endl;
  print_t(M);
  //reader
  //searcher
 return 0;
}
