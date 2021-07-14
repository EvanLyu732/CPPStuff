template<typename T>
void f(T);


template<typename T>
class X {
};

template<typename T, int max>
class Buffer {
  T v[max];
public:
  Buffer() {}
};

Buffer<char,128> cbuf;

template<typename T, template<typename> class C>
class Xrefd {
  C<T> mems;
  C<T*> refs;
};

