#include <iostream>

class Vector{
private:
  double* elem; 
  int sz;
public:
  Vector(int s) :elem{new double[s]}, sz{s}
  {
  }

}

