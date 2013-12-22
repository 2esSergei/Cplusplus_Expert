#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<vector>

#include"ss_lenyek.h"
#include"ss_homok.h"
#include"ss_szivacs.h"
#include"ss_lpeget.h"
#include"fgvek.h"

using namespace std;

int main(int args, char* argv[]){
  string napok = "";
  int temp1, temp2;
  char c;
  string file = argv[1];
  vector<lenyek*> v;

  udv(args);
  beolv(v, napok, temp1, temp2, c, file);
  vers(v, napok, temp2);
  nyert(v, temp2);
  eredm(v, temp2);

  v.clear(); //minden tartalmazott obj-ra meghivja annak destruktorat
//  for(int i=0; i<temp2; i++)
//    v[i]->~lenyek(); //elemenkenti destruktorhivas

  return 0;
}
