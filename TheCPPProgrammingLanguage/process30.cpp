//member function
struct Date{
  int d, m, y;
  void init(Date& d, int, int, int);
  void add_year(Date& d, int n);
  void add_month(Date& d, int n);
  void add_day(Date& d, int n);
};

Date my_birthday;

void f()
{
  Date today;
  today.init(16,10,1996);
  my_birthday.init(30,12,1950);
}
