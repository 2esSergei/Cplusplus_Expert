#include<iostream>
#include<string>

using namespace std;

class lenyek{
  protected:
  string nev;
  bool elo;
  int tav;
  void meghal(){ elo = false; tav = 0;}

  public:
  lenyek(string s) : nev(s), tav(0) { elo = true;}
  virtual ~lenyek(){}

  friend std::ostream& operator<<(std::ostream&, const lenyek&);

  virtual string neve() const { return nev;}
  virtual bool el_e() const { return elo;}
  virtual int tavol() const { return tav;}

  virtual void nap_R()=0;
  virtual void fel_R()=0;
  virtual void eso_R()=0;
};



std::ostream& operator<<(std::ostream& S, const lenyek& L){
  S << L.neve() << " " << L.el_e() << " " << L.tavol() << endl;
}



class homok : public lenyek{
  int kap;
  int ke;

  public:
  homok(string s, int a) : lenyek(s), ke(a), kap(8){}
  homok() : lenyek("Anonym"), ke(0), kap(8){}
  homok(const homok& S) : lenyek(S.nev), ke(S.ke), kap(8){}
  ~homok(){}
  string neve() const { return this->nev;}
  bool el_e() const { return this->elo;}
  int tavol() const { return this->tav;}
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



class szivacs : public lenyek{
  int kap;
  int ke;

  public:
  szivacs(string s, int a) : lenyek(s), ke(a), kap(20){}
  szivacs() : lenyek("Anonym"), ke(0), kap(20){}
  szivacs(const szivacs& S) : lenyek(S.nev), ke(S.ke), kap(20){}
  ~szivacs(){}
  string neve() const { return this->nev;}
  bool el_e() const { return this->elo;}
  int tavol() const { return this->tav;}
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



class lepegeto : public lenyek{
  int kap;
  int ke;

  public:
  lepegeto(string s, int a) : lenyek(s), ke(a), kap(12){}
  lepegeto() : lenyek("Anonym"), ke(0), kap(12){}
  lepegeto(const lepegeto& S) : lenyek(S.neve()), ke(S.keszl()), kap(12){}
  ~lepegeto(){}
  string neve() const { return this->nev;}
  bool el_e() const { return this->elo;}
  int tavol() const { return this->tav;}
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


/*
  lepegeto::lepegeto(const lepegeto& S) : lenyek(""), ke(0), kap(12){
    this->nev = "";
    this->nev = S.neve();
    this->tav = S.tavol();
    this->ke = S.keszl();
  }*/
