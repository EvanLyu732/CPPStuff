#include <list>
#include <iostream>

using namespace std;

class Employee {
public:
  void print() const;
  string full_name() const {return first_name + ' ' + middle_initial + ' ' + family_name;}
private:
  string first_name, family_name;
  char middle_initial;
};

//derived class
class Manager : public Employee {
public:
  void print() const;
};

void Manager::print() const
{
  cout<<"name is"<<full_name()<<'\n';
}

/* void Manager::print() const */
/* { */
/*   Employee::print(); */
/*   cout<<level; */
/* } */

int main()
{
  Manager manager;
  manager.print();
}
