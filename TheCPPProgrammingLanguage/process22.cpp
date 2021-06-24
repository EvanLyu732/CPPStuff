#include <iostream>

//pointer and reference
void increment_byref(int& val)
{
  val ++;
}

void increment_bypointer(int* val)
{
  (*val)++;
}

int main()
{
  int a = 5;
  std::cout<<"a is"<<a<<std::endl;
  increment_byref(a);
  std::cout<<"a is"<<a<<std::endl;
  increment_bypointer(&a);
  std::cout<<"a is"<<a<<std::endl;
}

