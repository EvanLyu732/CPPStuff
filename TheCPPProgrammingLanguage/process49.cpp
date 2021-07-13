template<typename C>
class String {
public:
  String();
  explicit String(const C*);
  String(const String&);
  String operator=(const String&);

  /* C& operator[](int n) {return ptr[n];} */
  /* String& opeartor+=(C c); */

private:
  static const int short_max = 15;
  int sz;
  C* ptr;
};

template<typename T>
struct Link {
  Link* pre;
  Link* suc;
  T val;
};

template<typename T>
class Vector {
  public:
    using value_type = T;
    /* using iterator = Vector_iter<T>; */
};

template<typename Scalar>
class complex {
  Scalar re, im;
public:
  complex() :re{}, im{} {}
  template<typename T>
  complex(T rr, T ii = 0) :re{rr}, im{ii} {}

  complex(const complex&) = default;
  template<typename T>
    complex(const complex<T>& c) : re{c.real()}, im{c.imag()} {}
};

template<typename T>
struct X {
  static constexpr Point p {100, 250}
  static const int m1 = 7;
  static int m2 = 8;
  static int m3;
  static void f1() {}
  static void f2();
};

class Jchar {
public:
  Jchar();
};

String<char> cs;

void f()
{
  String<Jchar> js;
  cs = "This is good";
}


/* int main() */
/* { */
/*   map<String<char>, int> m; */
/*   for (String<char> buf; cin>>buf;) */
/*     ++m[buf]; */
/* } */
