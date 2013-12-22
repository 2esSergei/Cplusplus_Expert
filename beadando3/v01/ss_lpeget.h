#ifndef LEPEG
#define LEPEG

#include<iostream>
#include<string>

#include"ss_lenyek.h"

using namespace std;

class lepegeto : public lenyek{
  int kap;
  int ke;

  public:
  lepegeto(string s, int a) : lenyek(s), ke(a), kap(12){}
  lepegeto() : lenyek("Anonym"), ke(0), kap(12){}
  lepegeto(const lepegeto& S) : lenyek(S.neve()), ke(S.keszl()), kap(12){}
  int keszl() const { return this->ke;}

  void nap_R(){
    if(this->elo && ke-2>0){
      ke -= 2;
      if(ke>kap)
        ke = kap;
      tav++;
    }
    else
      this->meghal();
  }
  void fel_R(){
    if(this->elo && ke-1>0){
      ke--;
      if(ke>kap)
        ke = kap;
      tav += 2;
    }
    else
      this->meghal();
  }
  void eso_R(){
    if(this->elo && ke>0){
      ke += 3;
      if(ke>kap)
        ke = kap;
      tav++;
    }
    else
      this->meghal();
  }
};
#endif
