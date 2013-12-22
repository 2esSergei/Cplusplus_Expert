#ifndef HOMOK
#define HOMOK

#include<iostream>
#include<string>

#include"ss_lenyek.h"

using namespace std;

class homok : public lenyek{
  int kap;
  int ke;

  public:
  homok(string s, int a) : lenyek(s), ke(a), kap(8){}
  homok() : lenyek("Anonym"), ke(0), kap(8){}
  homok(const homok& S) : lenyek(S.nev), ke(S.ke), kap(8){}
  int keszl() const { return this->ke;}

  void nap_R(){
    if(this->elo && ke-1>0){
      ke--;
      if(ke>kap)
        ke = kap;
      tav += 3;
    }
    else
      this->meghal();
  }
  void fel_R(){
    if(this->elo && ke>0){
      if(ke>kap)
        ke = kap;
      tav++;
    }
    else
      this->meghal();
  }
  void eso_R(){
    if(this->elo && ke>0){
      ke += 3;
      if(ke>kap)
        ke = kap;
    }
    else
      this->meghal();
  }
};
#endif
