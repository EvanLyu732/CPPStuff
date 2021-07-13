#include <iostream>
#include <vector>


struct C {
  const char* val;
  int i;

  void print(int x) {std::cout<<val<<x<<'\n';}
  int f1(int);
  void f2();
  C(const char* v) {val=v;}
};

using Pmfi = void (C::*)(int); //pointer to member function of C taking an int 
using Pm = const char* C::*;  //pointer to char* data member of C

void f(C& z1, C& z2)
{
  C* p = &z2;
  Pmfi pf=&C::print;
  Pm pm=&C::val;

  z1.print(1);
  (z1.*pf)(2);
  z1.*pm = "nv1";
  p->*pm="nv2";
  z2.print(3);
  (p->*pf)(4);
}


class Text : public Std_interface {
public:
  void start();
  void suspend();
  virtual void print();
private:
  std::hecto s;
};
