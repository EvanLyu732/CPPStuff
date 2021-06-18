#include <iostream>

using namespace std;

int main()
{
  int var;
  int *ptr;
  int val;

  val = 3000;
  ptr = &var;

  cout << "The Address of var is "<< ptr<<endl;
  cout << "The value of val is "<< val<<endl;
  return 0;

}
