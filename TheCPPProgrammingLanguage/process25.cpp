#include <iostream>

/* reading argument input */
int main(int argc, char* argv[])
{
  switch(argc) {
    case 1:
      std::cout<<"This is 1"<<std::endl;
      break;
    case 2:
      std::cout<<"This is 2"<<std::endl;
      break;
    default:
      std::cout<<"No argument is given"<<std::endl;
      return 1;
  }
}
