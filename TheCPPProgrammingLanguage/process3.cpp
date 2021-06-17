#include <iostream>
#include <vector>

using namespace std;

double* pd = nullptr;

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
