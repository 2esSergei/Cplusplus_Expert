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
  ss_point E(7.7, 2.345);
  ss_rectangle M(C,D);
  if(N.ss_rectangle::ss_eq_csucs(M))
    cout << "Van kozos csucs!" << endl;
  if(N.ss_rectangle::ss_eq_csucs(D))
    cout << "A-csucs benne van." << endl;
  else
    cout << D << " nincsen benne!" << endl;
  cout << "Terulet: " << N.ss_rectangle::ss_ter() << endl;
  if(N.ss_rectangle::ss_p_benne(E))
    cout << "BENNE!!!" << endl;
  
  /*
                                                             ss_rectangle X;
  cin >> X;
  cout << endl << endl;
  cout << X;*/
  return 0;
}
