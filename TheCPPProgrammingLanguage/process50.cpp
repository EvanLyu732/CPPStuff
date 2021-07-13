#include <vector>
#include <sqrt>
#include <complex>

//functino template example
template<typename T>
void sort(std::vector<T>& v)
{
  const size_t n = v.size();

  for (int gap=n/2; 0<gap; gap/=2)
    for (int i=gap; i<n; i++)
      for (int j=i-gap; 0<=j; j-=gap)
        if (v[j+gap] < v[i]) {
          T temp = v[j];
          v[j] = v[j+gap];
          v[j+gap] = temp;
        }
}

template<typename T, typename C>
T get_nth(C& p, int n);

struct Index {
  operator int();
};


//explicit specialization
void f(vector<int>& v, short s, Index i)
{
  int i1 = get_nth<int>(v,2);
  int i2 = get_nth<int>(v,s);
  int i3 = get_nth<int>(v,i);
}

template<typename Iter>
Iter mean(Iter first, Iter last)
{
  typename Iter::value_type = *first;
}

template<typename T>
T* mean(T*,T*);

void f(vector<int>& v, int* p, int n)
{
  auto x = mean(v.begin(), v.end());
  auto y = mean(p, p+n);
}


template<typename T>
    T sqrt(T);
template<typename T>
    complext<T> sqrt(complex<T>);
double sqrt(double);

void f(std::complex<double> z)
{
  sqrt(2);
  sqrt(2.0);
  sqrt(z);
}
