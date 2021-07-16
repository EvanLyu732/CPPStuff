#include <iostream>
using namespace std;

int g_var = 0;
char *gp_var;

int main()
{
  int var;
  char* p_var;
  char arr[] = "abc";
  char *p_var1 = "123456";
  static int s_var = 0;
  p_var = (char*)malloc(10);
  free(p_var);
  return 0;
}
