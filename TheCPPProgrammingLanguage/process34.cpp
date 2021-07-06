/* class A { */
/*   public: */
/*     int a {7}; */
/*     int b = 77; */
/* }; */

class A {
  public:
    int a {7};
    int b = 77;
    A() : a{7}, b{77} {}
};

/* class A { */
/*   public: */
/*     A(): a{7}, b{5} () */
/*     A(int a_val) : a{a_val}, b{5} () */
/*     A(D d): a{7}, b{g(d)} {} */
/*   private: */
/*     int a, b; */
/* }; */

int count = 0;
int count2 = 0;

int f(int i) {return i+count;}

struct S {
  int m1 {count2};
  int m2 {f(m1)};
  S() {++count2;}
};

int main()
{
  S s1;
  ++count;
  S s2;
}

class Node {
  static int node_count;
};

int Node::node_count = 0;

/* template<class T, int N> */
/* class Fixed { */
/* public: */
  
/* }; */
