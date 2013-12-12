#include<iostream>
#include<fstream>
#include<cstdlib>

#include "ss_point.h"
#include "ss_rectangle.h"

using namespace std;

int main(int argc, char* argv[]){
  cout  << "Alkalmazott Modul 2. beadando" << endl
        << "Keszitette: Balogh Ferenc (LNBZVX)" << endl;
  cout  << "Az adatfile nevet programinditaskor argumentumkent kell megadni."
        << endl << "Ellenkezo esetben es hibas filenev eseten a program leall"
        << endl;
  cout  << "A file tartalmanak helyesseget a program nem ellenorzi!" << endl
        << "Hibas megis olvashato adat eseten a program fut tovabb." << endl
        << endl << endl
        << "A fileban az elso adat egy egesz legyen ami a teglalapok szamanak"
        << " ketszereset adja meg illetve a definialo csucsok osszes szamat."
        << endl << "A negyzeteket ket atellenes csucsanak koordinataja"
        << " definialja, szokozzel vagy ujsorral elvalasztva." << endl << endl;
  int a;
  ifstream file;
  if(argc != 2){
    cout << "Hibas argumentum, az argumentumnak egyetlen ervenyes filenevet kell tartalmaznia."<< endl;
    exit(0);
  }
  file.open(argv[1]);
  if(file.fail()){
    cout << "A file nem letezik: " << argv[1] << endl << "Kilepes." << endl;
    exit(0);
  }
  file >> a;
  ss_point* A = new ss_point[a];
  for(int i=0; i<a; i++){
    file >> A[i];
  }
  file.close();
  cout << "A filebol kinyert pontok: "<< endl;
  if(a%2 != 0) a--;
  for(int i=0; i<a; i++)
    cout << A[i] << endl;



  ss_rectangle* T = new ss_rectangle[a/2];
  for(int i = 0 ; i<a; i+=2){
    ss_rectangle X(A[i],A[i+1]);
    T[i/2]=X;
  }

  cout << endl << endl << "A filebol kinyert negyszogek: " << endl;
  for (int i=0; i<a/2; i++)
    cout << T[i] << endl;



  cout  << "Keressuk azon teglalapokat, amelyekre illeszkedik a megadott pont."
        << endl
        << "Hibas koordinata ertekek eseten a program a default ertekekkel "
        << "fog dolgozni." << endl
        << "Kerem adja meg az adott pont koordinatait (ket egesz szam): ";
  ss_point R;
  cin >> R;



  cout << "A kovetkezo negyzetek illeszkednek " << R << " pontra." << endl;
  int c = 0;
  for (int i = 0; i< a/2; i++){
    if(T[i].ss_rectangle::ss_p_benne(R)){
      cout  << T[i] << "Terulete: " << T[i].ss_rectangle::ss_ter() << endl
            << "Kerulete: " << T[i].ss_rectangle::ss_ker() << endl;
      c++;
    }
  }
  cout << "Az osszes negyzet, amelyre a pont illeszkedik: " << c << endl;
  return 0;
}
