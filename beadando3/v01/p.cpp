#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include"ss_lenyek.h"

using namespace std;



int main(int args, char* argv[]){
  cout  << "Alkalmazott Modul - Programozas : 2. beadando" << endl
        << "Keszitette: Balogh Ferenc (LNBZVX)" << endl
        << "Lenyek versenye:" << endl
        << "A nevezo lenyek listajat file-ban adja meg." << endl
        << "A file neve legyen az egyetlen argumentum." << endl
        << "A verseny korulmenyei egy szokoz nelkuli karakterlanc a file elejen."
        << endl << "A kovetkezo 3 egesz a harom lenytipus osszes szama: "
        << "homokjaro, szivacs, lepegeto"
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
  int temp, t1, t2, t3, t4; //szegmentalasi hibak elkerulesere
  char k;
  ifstream FL;
  FL.open(argv[1]);
  if(FL.fail()){
    cout << "A file beolvasas sikertelen: " << argv[1] << endl << "Kilepes" << endl;
    exit(0);
  }
  //File megnyitva
  FL >> napok;
  FL >> temp;
  if (FL.fail() || temp < 0){
    cout << "A file tartalma hibas.1" << endl << "Kilepes." << endl;
    exit(0);
  }
  t4 += temp;
  homok v1[temp];
  FL >> temp;
  if (FL.fail() || temp < 0){
    cout << "A file tartalma hibas.2" << endl << "Kilepes." << endl;
    exit(0);
  }
  t4 += temp;
  szivacs v2[temp];
  FL >> temp;
  if (FL.fail() || temp < 0){
    cout << "A file tartalma hibas.3" << endl << "Kilepes." << endl;
    exit(0);
  }
  t4 += temp;
  lepegeto v3[temp];

  string sx = "";
  t1=0; t2=0; t3=0;
  homok h;
  szivacs s;
  lepegeto l;
  int hossz = sizeof(napok.c_str())/(sizeof(*(napok.c_str())))-2; 
  cout << "Meretek: " << sizeof(napok.c_str())/(sizeof(*(napok.c_str()))) << " xxx " << napok.c_str()[2]<<  sizeof(v1)/sizeof(*v1) << " " << sizeof(v2)/sizeof(*v2) << endl;
  for(int i=0; i < t4; i++){ 
    cout << "cilkus megy: " << t4 << endl;
    FL >> sx;
    cout << i+4 << " ok sx " << sx << endl;
    FL >> k;
    cout << i+4 << " ok k " << k << endl;
    FL >> temp;
    cout << i+4 << " ok temp " << temp << endl;
    if(FL.fail()){
      cout << "A file tartalma hibas." << i+4 << endl << "Kilepes." << endl;
      exit(0);
    }
    switch (k)
    {
      case 'h': if(t1 < sizeof(v1)/sizeof(*v1)){
                  h = homok(sx, temp);
                  v1[t1] = h;
                  t1++;
                }
                break;
      case 's': if(t2 < sizeof(v2)/sizeof(*v2)){
                  s = szivacs(sx, temp);
                  v2[t2] = s;
                  t2++;
                }
                break;
      case 'l': if(t3 < sizeof(v3)/sizeof(*v3)){
                  l = lepegeto(sx, temp);
                  v3[t3] = l;
                  t3++;
                }
                break;
     default:   break;
    }
    sx = "";
    k = '\0';
  }
  t1++;
  t2++;
  t3++;
  //A file tartalma beolvasva







  homok a("gyik", 5);
  szivacs b("dorzsi", 12);
  lepegeto c("galopp", 7);
  cout << "OKE" << a;
  cout << a;
  cout << "KKK" << a.lenyek::tavol();
  a.homok::nap_R();
  cout << a.homok::tavol() << endl;
  FL.close();
  return 0;
}
