#include <iostream>
#include <vector>


/* concurrency */

void f() {std::cout<<"Hello";}

void f(vector<double>& v);

struct F{
  void operator()() {std::cout<<"hi concurrency\n";}
};

void user()
{
  std::thread t1 {f};
  std::thread t2 {F()};

  t1.join();
  t2.join();
}
