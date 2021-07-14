using namespace std;

bool tracing;

template<typename T>
T sum(std::vector<T>& v)
{
  T t{};
  if (tracing)
    cerr << "sum(" << &v << ")\n";
  for (int i=0; i!=v.size(); i++)
    t = t+v[i];
  return t;
}

class Quad {
};

void f(std::vector<Quad>& v)
{
  Quad c = sum(v);
}
