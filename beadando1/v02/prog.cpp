#include<iostream>
#include<vector>

#include "ss_table.h"
using namespace std;



template<typename T>
struct table;


int main(int args, char* argv[]){
  //struct matrix
  table<int> M(5,4);
  for(int i=0; i<5; i++){M.data[i][0] = 1;}
  cout << "Eddig OK?" << endl;
  print_t(M);
  //reader
  //searcher
 return 0;
}
