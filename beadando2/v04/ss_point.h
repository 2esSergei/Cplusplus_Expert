#ifndef SS_POINT
#define SS_POINT


#include<iostream>


struct ss_point{
  //pont struktura: equal-takeout-takein
  int x;
  int y;

  ss_point(int kx,int ky){
    x = kx;
    y = ky;
  }
  ss_point(){
    x = 0;
    y = 0;
  }
  friend bool operator==(const ss_point& A, const ss_point& B){
    if(A.x == B.x && A.y == B.y)
      return true;
    return false;
  }
  friend std::istream& operator>>(std::istream& S, ss_point& A){
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
    S << A.x << " " << A.y;
  }
};


#endif
