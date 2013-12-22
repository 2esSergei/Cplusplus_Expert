#ifndef LENYEK
#define LENYEK

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

#endif
