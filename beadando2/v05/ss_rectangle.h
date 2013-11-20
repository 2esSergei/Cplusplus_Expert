#ifndef SS_RECTANGLE_H
#define SS_RECTANGLE_H


#include<iostream>
#include"ss_point.h"


class ss_rectangle{
  ss_point A,B,C,D;

  public:
  ss_rectangle(const ss_point& Aa, const ss_point& Bb);
  ss_rectangle(const ss_rectangle& other);
  ss_rectangle();
  ~ss_rectangle(){};

  ss_point operator()(int i) const;
  const bool ss_eq_csucs(const ss_rectangle& N);
//  friend bool operator==(const ss_rectangle&, const ss_rectangle&);
  friend std::istream& operator>>(std::istream&, ss_rectangle&);
  friend std::ostream& operator<<(std::ostream&, const ss_rectangle&);
};

//ss_point operator()(const int i)const;
//const bool ss_rectangle::ss_eq_csucs(ss_rectangle& N2);
std::istream& operator>>(std::istream&, ss_rectangle&);
std::ostream& operator <<(std::ostream&, const ss_rectangle&);

#endif
