#include <iostream>
#include <vector>

using namespace std;

double* pd = nullptr;

//define a class
class Vector2{
public:
  Vector2(int s) :elem{new double[s]}, sz{s} {} //construct a Vector
  double& operator[](int i) {return elem[i];} 
  int size() {return sz;}
private:
  double* elem; //pointer to elements
  int sz; // the number of elements
};

Vector2 v(6); // a vector with 6 elements

//define a struct
struct Vector{
  int sz; //number of elements
  double* elem; //pointer to elements
};

void vector_init(Vector& v,int s)
{
  v.elem = new double[3];
  v.sz = s;
}

double read_and_sum(int s)
{
  Vector v;
  vector_init(v,s);
  for (int i=0; i!=s; ++i)
      cin>>v.elem[i];
  
  double sum = 0;
  for (int i=0; i!=s; ++i)
      sum+=v.elem[i];
  return sum;
}


int count_x(char* p, char x)
{
  if (p==nullptr) return 0;
  int count=0;
  for(;*p!=0;++p)
    if (*p==x)
        ++count;
  return count;
}

void copy_fct()
{
  int v1[10] = {0,1,2,3,4,5,6,7,8,9};
  int v2[10];

  for (auto i=0;i!=10;++i) //copy elemets
      v2[i]=v1[i];

  for (auto x: v1)
      cout<<x<<'\n';
  
  for (auto& x:v1)
      ++x;
}

void pointer()
{
  char v[6]; // array of 6 chars
  char* p;

  p = &v[3];
  char x = *p;

}

bool accept()
{
  cout<<"Do you want to proceed(y or n)?\n";

  char answer = 0;
  cin>>answer;

  switch(answer){
  case 'y':
    return true;
  case 'n':
    return false;
  default:
    cout<<"I'll take that for a no.\n";
    return false;
  }
}

int main()
{
  accept();
}
