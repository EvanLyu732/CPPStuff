using namespace std;

class Container{
public:
  virtual double& operator[](int) = 0; //virtual function
  virtual int size() const = 0; //const member function
  /* virtual Container() {} //destructor */
};

void use(Container& c)
{
  const int sz = c.size();

  for (int i=0; i!=sz; ++i)
      cout<<c[i]<<'\n';
}

//implement the container//:public -> is derived from 
class Vector_container :public Container {
  Vector v;
public: 
  Vector_container(int s): v(s) {} //Vector of s elements
  Vector_container(){}

  double& opeartor[](int i) {return v[i];}
  int size() const {return v.size();}
};

void g()
{
  Vector_container vc {10,9,8,7,7,2,3,1};
  use(vc);
}

