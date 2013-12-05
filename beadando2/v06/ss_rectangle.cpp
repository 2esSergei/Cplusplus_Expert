#include<iostream>
#include"ss_rectangle.h"
#include<cmath>


ss_rectangle::ss_rectangle(const ss_point& Aa, const ss_point& Bb)
  : A(Aa)
  , C(Bb){
  //tengellyel parhuzamos oldalu negyszogek, atellenes csucsokkal def.
    B.x = C.x;
    B.y = A.y;
    D.x = A.x;
    D.y = C.y;
}


ss_rectangle::ss_rectangle(){}

ss_rectangle::ss_rectangle(const ss_rectangle& N){
  this->A = N(0);
  this->B = N(1);
  this->C = N(2);
  this->D = N(3);
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


std::istream& operator>>(std::istream& S, ss_rectangle& N){
  ss_point A,B;
  S >> A;
  S >> B;
  ss_rectangle T(A,B);
  N = T;
}


std::ostream& operator<<(std::ostream& S, const ss_rectangle& N){
  for (int i=0; i<4; i++)
    S << N(i) << std::endl;
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


const bool ss_rectangle::ss_eq_csucs(const ss_point& P){
  for(int i=0; i<4; i++)
    if((*this)(i) == P)
      return true;
  return false;
}


const float ss_rectangle::ss_ter(){
  return (std::abs(((*this)(0)).ss_tav((*this)(1)))) * (std::abs(((*this)(0)).ss_tav((*this)(4))));
}


const bool ss_rectangle::ss_p_benne(const ss_point& P){
  if(std::abs(P.x - A.x) <= std::abs(C.x - A.x) && std::abs(P.y - A.y) <= std::abs(C.y - A.y))
    return true;
  else return false;
}
