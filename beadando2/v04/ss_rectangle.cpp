#include<iostream>
#include"ss_rectangle.h"


ss_rectangle::ss_rectangle(const ss_point& Aa, const ss_point& Bb)
  : A(Aa)
  , C(Bb){
  //tengellyel parhuzamos oldalu negyszogek, atellenes csucsokkal def.
    B.x = C.x;
    B.y = A.y;
    D.x = A.x;
    D.y = C.y;
}

ss_point ss_rectangle::operator()(int i)const{
  if(i==0)
    return A;//c='A';
  if(i==1)
    return B;//c='B';
  if(i==2)
    return C;//c='C';
  return D;
}


const bool ss_rectangle::ss_eq_csucs(const ss_rectangle& N){
  for(int i=0; i<4; i++){
    for (int j=0; j<4; j++){
      if((*this)(i) == N(j))
        return true;
    }
  }
  return false;
}
