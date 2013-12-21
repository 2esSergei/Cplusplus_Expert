#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<vector>
#include"ss_lenyek.h"

using namespace std;



int main(int args, char* argv[]){
  cout  << "Alkalmazott Modul - Programozas : 2. beadando" << endl
        << "Keszitette: Balogh Ferenc (LNBZVX)" << endl
        << "Lenyek versenye:" << endl
        << "A nevezo lenyek listajat file-ban adja meg." << endl
        << "A file neve legyen az egyetlen argumentum." << endl
        << "A verseny korulmenyei egy szokoz nelkuli karakterlanc a file elejen."
        << endl << "A kovetkezo egy egesz a versenybe nevezok osszes szama."
        << endl
        << "Azutan jojjenek a nevezo lenyek adatai: nev fajta keszlet" << endl
        << "Egyeb argumentum megadasi kiserletek eseten a program leall."
        << endl << endl << endl;
  if(args != 2){
    cout << "Az argumentumok szama nem megfelelo." << endl;
    exit(0);
  }
  //Udvozlo



  string napok = "";
  int temp1, temp2;
  char c;
  ifstream FL;
  FL.open(argv[1]);
  if(FL.fail()){
    cout << "A file megnyitasa sikertelen: " << argv[1] << endl << "Kilepes" << endl;
    exit(0);
  }
  //File megnyitva
  FL >> napok;
  FL >> temp2;
  if (FL.fail() || temp2 < 0){
    cout << "A file tartalma hibas.1" << endl << "Kilepes." << endl;
    exit(0);
  }
  string st;
  vector<lenyek*> v;
  for(int i=0; i<temp2; i++){
    st = "";
    c = '0';
    FL >> st;
    FL >> c;
    FL >> temp1;
    if(FL.fail()){
      cout << "A file tartalma hibas.2" << i+4 << endl << "Kilepes." << endl;
      exit(0);
    }
    switch (c){
      case 'h':{   lenyek* x = new homok(st, temp1);
                  v.push_back(x);
                  break;}
      case 's':{   lenyek* x = new szivacs(st, temp1);
                  v.push_back(x);
                  break;}
      case 'l':{   lenyek* x = new lepegeto(st, temp1);
                  v.push_back(x);
                  break;}
    }
  }
  FL.close();
  //A file tartalma beolvasva



  int hossz = sizeof(napok.c_str())/(sizeof(*(napok.c_str())))-2;
  for(int j=0; j<hossz; j++){
    switch (napok.c_str()[j]){
      case 'n':{    for(int i=0; i<temp2; i++)
                      v[i]->nap_R();
                    break;}
      case 'f':{    for(int i=0; i<temp2; i++)
                      v[i]->fel_R();
                    break;}
      case 'e':{    for(int i=0; i<temp2; i++)
                      v[i]->eso_R();
                    break;}
    }
  }
  //Verseny



  temp1 = 0;
  for(int i=0; i<temp2; i++){
    if((v[i]->tavol()) > (v[temp1]->tavol()))
      temp1 = i;
  }
  cout << "A verseny gyoztese: " << *(v[temp1]);



  cout << "Az osszes vegeredmeny:" << endl;
  for(int i=0; i<temp2; i++)
    cout << *(v[i]);
  return 0;
}
