#include <iostream>

struct Address {
  const char* name;
  int number;
  const char* street;
  const char* town;
  char state[2];
  const char* zip;
};

//initialize address first way
void f()
{
  Address jd;
  jd.name = "Jim Dandy";
  jd.number = 61;
}

//initial address second way
Address jd = {
  "Jim Dandy",
  61, "South St",
  "New Providence",
  {'N','J'}, "07974"
};

//print address of jd
void print_addr(Address* p)
{
  std::cout<<p->name<<'\n'
           <<p->number<<' '<<p->street<<'\n'
           <<p->town<<'\n'
           <<p->state[0]<<p->state[1]<<' '<<p->zip<<'\n';
}

int main()
{
  print_addr(&jd);
}
