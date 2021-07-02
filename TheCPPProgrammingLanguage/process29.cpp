#include <iostream>

//struct is a class where members are by default public
class X {
  private:
    int m;
  public:
    X(int i) :m{i} {}
    int mf(int i)
    {
      int old = m;
      m = i;
      return old;
    }
};

X var {7};

int user(X var, X* ptr)
{
  int x = var.mf(7); //using . dotn
  int y = ptr->mf(7); //using arrow
  /* int z = var.m; //illegal */
  return 0;
}
