#include<iostream>
#include<vector>
#include<fstream>
#include<stdlib.h>

using namespace std;

#include "ss_table.h"


namespace bead1{

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

void read_std(table<int>& M){
  int w = M.data.size();
  cout << "A matrixot letrehoztam, most kerem adja meg az elemeket soronkent." << endl
       << "(Ha veletlenul ENTER-t nyomna mielott a teljes sort beirja, nyugodtan folytathatja attol az elemtol amelyiktol lemaradt.)" << endl
       << "(A sorokat feltetlenul valassza el ENTER-rel!)" << endl;
  for(int i = 0; i<w; i++){
    for(int j = 0; j<w; j++){
      cin >> M.data[i][j];
      while(cin.fail()){
        cin.clear();
        cin.ignore(256, '\n');
        cout << "A " << j+1 << "-ik elem nem megfelelo! Kerem irja be ujra ezt a sort, de csak a " << j+1 << "-ik elemtol kezdve." << endl;
        cin >> M.data[i][j];
      }
    }
    cin.ignore(256, '\n');
  }
}



void read_file(table<int>& M){
  int w = M.data.size();
  cout << "A matrix elemeit file-bol olvasom." << endl
       << "Kerem gyozodjon meg rola, hogy a file letezik es megfelel-e a formai kovetelmenyeknek:" << endl
       << "1, Az elemek egeszek es szokozok valasztjak el oket." << endl
       << "2, Egy sorban pontosan annyi elem van amennyi az oszlopok szama." << endl
       << "3, Pontosan annyi sor van amennyinek lennie kell az elozetes meret megadas szerint." << endl
       << "Kerem adja meg a file nevet (kiterjesztessel egyutt):";
  string fn;
  cin >> fn;
  ifstream FL;
  FL.open(fn.c_str());
  while(FL.fail()){
    cout << "A file nem letezik vagy rossz nevet adott meg." << endl
         << "Kerem adjon egy letezo filenevet: ";
    cin.clear();
    cin.ignore(256, '\n');
    cin >> fn;
    FL.open(fn.c_str());
  }
  int temp;
  cout << "A kiejelolt file-t sikeresen megnyitottam." << endl;
  for (int i = 0; i< w; i++){
    for (int j = 0; j<w; j++){

      FL >> M.data[i][j];
      if(!FL.good()){
        cout << "A file tartalma nem megfelelo!" << endl
             << "Hibaba akadtam az (" << i+1 << "," << j+1 << ")-ik elmnel. Kerem ellenorizze." << endl
             << "A program most leall." << endl;
        exit(1);
      }
    }
  }


//  cout << "OKES" << endl;
  FL.close();
}
}
