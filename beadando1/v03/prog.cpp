#include<iostream>
#include<vector>
#include<stdlib.h>

#include "ss_table.h"
using namespace std;



template<typename T>
struct table;


int main(int args, char* argv[]){
  //argumentum ellenorzes (ha 0 vagy betu akkor lebegopontos kivetelt dob)
  if(args > 2){
    if( (args-2)%atoi(argv[1])!=0 ){
      cout << "A bemenet nem megfelelo! Kilepes!" << endl;
      exit(1);
    }
    //struct matrix
    table<int> M(atoi(argv[1]),atoi(argv[1]));
    //fill 
    int a=0;
    for (int i = 0; i < args-2; i++){
      M.data[a][i%atoi(argv[1])] = atoi(argv[i+2]);
      if(i%atoi(argv[1]) == atoi(argv[1])-1)
        a++;
    }
    print_t(M);
  }else{
  //std
  
  }
  //searcher
  return 0;
}
