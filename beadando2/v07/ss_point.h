#ifndef SS_POINT
#define SS_POINT


#include<iostream>
#include<cmath>


struct ss_point{
  //pont struktura: equal-takeout-takein-distance
  int x;
  int y;

  ss_point(int kx,int ky){
  //konstruktor
    x = kx;
    y = ky;
  }
  ss_point(){
  //default-konstruktor
    x = 0;
    y = 0;
  }


  friend bool operator==(const ss_point& A, const ss_point& B){
  //equal operator
    if(A.x == B.x && A.y == B.y)
      return true;
    return false;
  }


  friend std::istream& operator>>(std::istream& S, ss_point& A){
  //read-out operator
    S >> A.x;
    if(S.fail()){
      S.clear();
      A.x = 0;
    }
    S >> A.y;
    if(S.fail()){
      S.clear();
      A.y = 0;
    }
  }


  friend std::ostream& operator<<(std::ostream& S, const ss_point& A){
  //take-in operator
    S << A.x << " " << A.y;
  }


  float ss_tav(const ss_point& P){
  //pont tavolsag
    return (std::sqrt((this->x - P.x)*(this->x - P.x) + (this->y - P.y)*(this->y - P.y)));
  }


};


#endif
