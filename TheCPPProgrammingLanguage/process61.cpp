#include <iostream>
using namespace std;

class Base 
{
  public:
    virtual void fun() {cout<<"Base::fun()"<<endl;}
    virtual void fun1() {cout<<"Base::fun1()"<<endl;}
    virtual void fun2() {cout<<"Base::fun2()"<<endl;}
};

class Derive : public Base 
{
public:
  void fun() {cout<<"Derived::fun()"<<endl;}
  virtual void D_fun1() {cout<<"Derived::D_fun1()"<<endl;}
  virtual void D_fun2() {cout<<"Derived::D_fun2()"<<endl;}
};

int main()
{
  Base *p = new Derive();
  p->fun();
  return 0;
}

