#include <iostream>
#include <typeinfo>

int main()
{
  auto z1 {99};
  std::cout<<typeid(z1).name()<<std::endl;
  return 0;
}


