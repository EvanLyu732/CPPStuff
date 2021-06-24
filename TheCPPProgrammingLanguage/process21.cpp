#include <iostream>
#include <map>


void f()
{
  int val = 1;
  std::cout<<val<<std::endl;
  int& r = val;
  std::cout<<r<<std::endl;
  r = 2;
  std::cout<<val<<std::endl;
}

int main()
{
  f();
}
