#include<iostream>
#include "ss_point.h"

using namespace std;

int main(){
  ss_point A;
  cout << "Pont (" << A.x <<"," << A.y << ")" << endl;
  ss_point B(1,2);
  ss_point C(1,2);
  if (!(A==B))
    cout << "Elso nem igaz!"<<endl;
  if(B==C)
    cout <<"Masodik igaz!" << endl;
  cin >> A;
  cout << A << endl;
  return 0;
}
