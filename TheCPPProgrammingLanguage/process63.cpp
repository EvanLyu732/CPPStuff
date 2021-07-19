#include <fstream>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename elemType>
void display_message(const string& msg, const vector<elemType> &vec)
{
  cout << msg;
  for (int ix = 0; ix < vec.size(); ++ix)
  {
    elemType t = vec[ix];
    cout << t << ' ';
  }
}

void display(const vector<int> &vec)
{
  for (int ix = 0; ix < vec.size(); ++ix)
    cout << vec[ix] << ' ';
  cout << endl;
}

void swap(int &val1, int &val2)
{
  int temp = val1;
  val1 = val2;
  val2 = temp;
}

int main()
{
  int ival = 1024;
  int *pi = &ival;
  int &rval = ival;

  int time;
  std::cin >> time;

  if (time <= 0)
    std::cout << "The time is right now!";
    exit(-1);

  std::cout << "This is end";
  return 0;
}
