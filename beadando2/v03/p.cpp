#include<iostream>
#include "ss_point.h"
#include "ss_rectangle.h"

using namespace std;

int main(){
  ss_point A(1,2);
  ss_point B(5,7);
  ss_rectangle N(A,B);
  for (int i=0; i<4; i++)
    cout << N(i) << endl;
  ss_point C(5,2);
  ss_point D(9,12);
  ss_rectangle M(C,D);
  if(N.ss_rectangle::ss_eq_csucs(N,M))
    cout << "Van kozos csucs!" << endl;
  return 0;
}
