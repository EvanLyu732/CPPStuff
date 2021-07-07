#include <iostream>

/* inline function test */

using namespace std;

inline void output(int a)
{
  cout<<a<<endl;
}

int main()
{
  output(8);
  return 0;
}
