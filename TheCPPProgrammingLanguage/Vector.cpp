#include "Vector.h"

Vector::Vector(int s)
  :elem{new double[s]}, sz{s}
{
}

double& Vector::opeartor[](int i)
{
  return elem[i];
}

int Vector::size()
{
  return sz;
}
