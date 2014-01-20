#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>

using namespace std;

class torp{
  protected:
    string nev;
    int alsz;

  public:
    torp(string _nev, int _alsz)
      : nev(_nev), alsz(_alsz){}
    virtual bool iszikis() const = 0;
};

class ftorp : public torp{
  protected:
    int iszik;

  public:
    ftorp(string _nev, int _alsz, int _iszik) : torp(_nev, _alsz), iszik(_iszik){}
    bool iszikis() const {return true;}
};

class ltorp : public torp{
  public:
    ltorp(string _nev, int _alsz) : torp(_nev, _alsz){}
    bool iszikis() const {return false;}
};



int main(){
  string s = "lilla";
  vector<torp*> v;
  ftorp* f = new ftorp("feri", 8, 10);
  ftorp* r = new ftorp("ricsi", 6, 8);
  ltorp* l = new ltorp(s, 6);

  torp* x;
  x = static_cast<torp*>(f);
  v.push_back(x);
  x = static_cast<torp*>(l);
  v.push_back(x);
  x = static_cast<torp*>(r);
  v.push_back(x);
  cout << "Lefutottam:" << endl << "Feri iszik: " << v[0]->iszikis()<< endl
       << "Lilla iszik: " << v[1]->iszikis() << endl
       << "Ricsi iszik: " << v[2]->iszikis() << endl;
  return 0;
}
