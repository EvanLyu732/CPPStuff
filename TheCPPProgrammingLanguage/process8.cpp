#include <istream>

using namespace std;

class complex{
  double re, im;
public:
  complex(double r, double i) :re{r}, im{i} {}
  complex(double r) :re{r}, im{0} {}
  complex() :re{0}, im{0} {}

  double real() const {return re;}
  void real(double d) {re=d;}
  double imag()const {return im;}
  void imag(double d) {im=d;}

  complex& operator+=(complex z){re+=z.re, im+=z.im; return *this;}
  complex& operator-=(complex z){re-=z.re, im-=z.im; return *this;}
};

class Vector{
private:
  double* elem;
  int sz;
public:
  Vector(int s) :elem{new double[s]}, sz{s} //constructor
  {
    for (int i=0; i!=s; ++i) elem[i]=0;
  }
  Vector() {delete[] elem;}

  /* double& opeartor[](int i); */
  int size() const;
};

class Vector2{
public:
  Vector2(std::initializer_list<double>);
  void push_back(double); //add element at end increasing the size by one
};

Vector2 read(istream& is)
{
  Vector2 v;
  for (double d; is>>d;) //read floating points value into d
      v.push_back(d);  
  return v;
}


