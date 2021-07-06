#include <iostream>
#include <array>
#include <vector>

template<class T>
class Matrix{
  std::array<int, 2> dim;
  T* elem;
public:
  Matrix(int d1, int d2) :dim{d1,d2}, elem{new T[d1*d2]} {}
  int size() const  {return dim[0]*dim[1];}

  Matrix(const Matrix&);  //copy constructor
  Matrix& operator=(const Matrix&); //copy assignment
 
  Matrix(Matrix&&); //move construtor 
  Matrix& operator=(Matrix&&); //move assignment

  /* ˜Matrix() {delete[] elem;} */
};

class X{
  std::string s;
  std::string s2;
  std::vector<std::string> v;
};

struct B1 {
  B1();
  B1(const B1&);
};

struct S{
  int* P;
};

/* S x(new int{0}); */

void f()
{
  S y {x};
  *y.p=1;
  *x.p=2;
  delete y.p;
  y.p=new int{3};
  *x.p=4;
}
