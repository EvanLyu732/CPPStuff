#include <iostream>

class A {
private:
  A() {}
  static A* AInstance;

public:
  static A* getAInstance()
  {
    if (AInstance == nullptr)
      AInstance = new A();
    return AInstance;
  }   
};

int main()
{
  A* aa;
  aa = aa->getAInstance();
  /* std::cout << "Singleton instance created successed" << std::endl; */
  return 0;
}
