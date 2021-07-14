void g(int);
void g2(int);

struct B {
  using Type = int;
  void g(char);
  void g2(char);
};

template<typename T>
class X : public T {
  public:
    typename T::Type m;
    /* using T::g2(); */

    void f()
    {
      this->g(2);
      g(2);
      g2(2);
    }
};


template<typename T>
class Matrix_base {
  int size() const {return sz;}
protected:
  int sz;
  T* elem;
};

template<typename T, int N>
class Matrix : public Matrix_base<T> {
  T* data()
  {
    return this->elem;
  }
};

void h(X<B> x)
{
  x.f();
}
