#include<iostream>
#include<vector>
#include<stdlib.h>

#include "ss_table.h"
using namespace std;



template<typename T>
struct table;


int main(int args, char* argv[]){
  //argumentum ellenorzes (ha 0 vagy betu akkor lebegopontos kivetelt dob)
  cout << "Alkalmazott Modul - Programozas : 1. Beadando" << endl
       << "Keszitette: Balogh Ferenc (LNBZVX)" << endl
       << endl << "***" << endl << endl;
  if(args > 2){
    cout << "Nagy szamu parametert kaptam az argumentumban. Feltetelezem, hogy ezek adatok es megprobalom feldolgozni." << endl;
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
    cout << "Sikeres beolvasas az argumentumokbol!" << endl;
  }else{
    if(args == 2){cout << "Egyetlen parameter lett megadva. Nincsen ilyen opcio!" << endl;}
    cout << "Az adatok bevitele a std-bemenetrol fog tortenni, kerem kovesse az utasitasokat." << endl
         << endl << "***" << endl << endl;
    //reader
    
  }
  //searcher
  return 0;
}
