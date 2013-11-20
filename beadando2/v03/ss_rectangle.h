#ifndef SS_RECTANGLE_H
#define SS_RECTANGLE_H


#include<iostream>
#include"ss_point.h"


class ss_rectangle{
  ss_point A,B,C,D;

  public:
  ss_rectangle(const ss_point& Aa, const ss_point& Bb);
//  ss_rectangle(const ss_rectangle& other);
  ~ss_rectangle(){};

  ss_point operator()(int i) const;
  bool ss_eq_csucs(const ss_rectangle& N1, const ss_rectangle& N2);
//  friend bool operator==(const ss_rectangle&, const ss_rectangle&);
//  std::istream& operator>>(std::istream&, ss_rectangle&);
//  std::ostream& operator<<(std::ostream&, ss_rectangle&);
};

//ss_point operator()(const int i)const;
///bool ss_rectangle::ss_eq_csucs(const ss_rectangle& N1, const ss_rectangle& N2)const;


#endif
