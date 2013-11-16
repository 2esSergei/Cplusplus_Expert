#include<iostream>
#include<vector>

using namespace std;

class A{
  public:
    A(){}
    ~A(){}
    void DoSomething(){}
};

class B : public A{
  public:
    B(){mStore = new vector<int>;}
    ~B(){delete mStore;}
    vector<int>* mStore;
};



int main(){
  A* a = new B;
  a->DoSomething();
  delete a;
  return 0;
}
