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
    cout << "Kerem adja meg a negyzetes matrix meretet: ";
    int w;
    cin >> w;
    cin.ignore(256, '\n');
    while(cin.fail()){
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Nem megfelelo bemenet! A matrix merete egesz szam, kerem ijron be egesz szamot: ";
      cin >> w;
    }
    cout << "Ha standard-bementrol szeretne bevinni a matrix elemeit, kerem gepelje be, hogy 'std'." << endl
         << "Ha nem vigyen be egy tetszoleges karaktert (egyebkent minden mas esetben filebol olvas a program." << endl
         << "A valasz: ";
    table<int> M(w,w);
    string s;
    cin >> s;
    if(s == "std"){read_std(M);}
    else{read_file(M);}
    print_t(M);
    cout << "A beolvasas sikeresen megtortent!" << endl
         << endl << "***" << endl << endl;
  }
  //searcher
  return 0;
}
