#ifndef SZIVACS
#define SZIVACS

#include<iostream>
#include<string>

#include"ss_lenyek.h"

using namespace std;

class szivacs : public lenyek{
  int kap;
  int ke;

  public:
  szivacs(string s, int a) : lenyek(s), ke(a), kap(20){}
  szivacs() : lenyek("Anonym"), ke(0), kap(20){}
  szivacs(const szivacs& S) : lenyek(S.nev), ke(S.ke), kap(20){}
  int keszl() const { return this->ke;}

  void nap_R(){
    if(this->elo && ke-4>0){
      ke -= 4;
      if(ke>kap)
        ke = kap;
    }
    else
      this->meghal();
  }
  void fel_R(){
    if(this->elo && ke-1>0){
      ke--;
      if(ke>kap)
        ke = kap;
      tav++;
    }
    else
      this->meghal();
  }
  void eso_R(){
    if(this->elo && ke>0){
      ke += 6;
      if(ke>kap)
        ke = kap;
      tav += 3;
    }
    else
      this->meghal();
  }
};
#endif
