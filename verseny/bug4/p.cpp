#include<iostream>

using namespace std;

class Foo{
  int Energy;
  int Speed;
  unsigned Mass;
  public:
    Foo(float kmph, float weight);
    float GetEnergy(){return Energy;}

};
Foo::Foo(float kmph, float weight)
  : Speed(kmph / 3.6)
  , Mass(weight * 1000)
  , Energy(Speed*Speed*Mass){
}



int main(){

  return 0;
}
