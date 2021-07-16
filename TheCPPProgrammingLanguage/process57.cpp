//pointer template
template<typename T>
class Ptr {
  T* p;
public:
  Ptr(T*);
  Ptr(const Ptr&);  //copy construction
  template<typename T2>
      explicit operator Ptr<T2>(); //conversion
};

//blank class for pointer template test
class Circle {
};

void f(Ptr<Circle> pc)
{
  Ptr<Circle> pc2 {pc};
}

