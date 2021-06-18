#include <iostream>

using namespace std;

template<typename T>
class Vector{
private:
  T* elem;
  int sz;
public:
  Vector(int s);
  ˜Vector() {delete[] elem;}

  T& operator[](int i);
  const T& operator[](int i)const;
  int size() const {return sz;}
};

template<typename T>
const T& Vector<T>::operator[](int i)const
{
  if (i<0 || size()<=i)
      throw out_of_range("Vector::operator[]");
  return elem[i];
}

Vector<char> vc(200);
Vector<std::string> vc2(17);
/* Vector<std::list<int> vc3(45); */

void write(const Vector<string>& vs)
{
  for (int i=0; i!=vs.size(); ++i)
    std::cout<<vs[i]<<'\n';
}

template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
  for (auto x : c)
      v+=x;
  return v;
}
    

template<typename T>
class Less_than {
    const T val; //value to compare
public:
    Less_than(const T& v) :val(v) {}
    bool operator() (const T& x) const {return x<val;} //call operator
}

Less_than<int> lti {42};
Less_than<string> lts {"Backus"};
