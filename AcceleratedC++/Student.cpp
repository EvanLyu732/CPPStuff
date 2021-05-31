#include <iostream>
#include <vector>

using namespace std;

struct Student
{
  std::string name;
  double midterm, final;
  std::vector<double> homework;


  std::istream& read(std::istream&);
  double grade() const;
};

istream& Student::read(istream& in)
{
  in >> name >> midterm >> final;
  return in;
} 


class Student_info {
  public:
    Student_info(); //constructor 
    Student_info(std::istream&); //different constructor
    double grade() const;
    std::istream& read(std::istream&);

  private:
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};
