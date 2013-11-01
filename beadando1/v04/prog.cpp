#include<iostream>
#include<vector>

#include"ss_table.h"

using namespace std;

void read_std(table<int>& M){
  int w = M.data.size();
  cout << "A matrixot letrehoztam, most kerem adja meg az elemeket soronkent." << endl
       << "(Ha veletlenul ENTER-t nyomna mielott a teljes sort beirja, nyugodtan folytathatja attol az elemtol amelyiktol lemaradt.)"
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
  print_t(M);
}



int main(int args, char* argv[]){
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
  table<int> M(w,w);

/*
  cout << "A matrixot letrehoztam, most kerem adja meg az elemeket soronkent." << endl
       << "(Ha veletlenul ENTER-t nyomna mielott a teljes sort beirja, nyugodtan folytathatja attol az elemtol amelyiktol lemaradt.)"
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
*/
  read_std(M);
  print_t(M);
  return 0;
}
