#include <iostream>
#include <mutex>

std::mutex locker;
int count = 10;

void do_save(int& number)
{
  locker.lock();
  count = count + number;
  locker.unlock();
  std::cout << "count is" << count << std::endl;
}

void do_withdraw(int& number)
{
  locker.lock();
  count = count - number;
  locker.unlock();
  std::cout << "count is" << count << std::endl;
}

int main()
{
  int number = 100;
  do_save(number);
  /* std::cout << "after saved, number is " << number << std::endl; */
  do_withdraw(number);
  /* std::cout << "after withdraw, number is " << number << std::endl; */
  return 0;
}
