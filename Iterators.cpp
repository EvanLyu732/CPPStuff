#include <iostream>
#include <vector>

int main()
{
  std::vector<int> values = {1,2,3,4,5};

  for (int i = 0; i < values.size(); i++)
  {
    std::cout << values[i] << std::endl;
  }

  //iterator
  for (int value : values)
  {
    std::cout << value << std::endl;
  }

  /* for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++) */
  /* { */
  /*   std::cout << *it << std::end; */
  /* } */

  /* std::cin.get(); */

  return 0;
}
