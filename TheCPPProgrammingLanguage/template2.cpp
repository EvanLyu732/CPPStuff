#include <iostream>
#include <string>

template<typename T>
void Print(T value)
{
  std::cout << value << std::endl;
}

int main()
{
  Print(5);
  Print("Hello");

  std::cin.get();

  return 0;
}
