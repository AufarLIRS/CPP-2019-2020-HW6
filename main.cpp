#include <iostream>
#include <swap.h>
#include <Array.h>
#include <Array.cpp>

int main()
{
 int b = 5;
  Array<int> a(size_t(10));
  std::cin >> b;
  a.size();
  //Array<int> a(10);
  for (int i = 0; i < a.size(); i++)
  {
     a[i] = i;
  }
  std::cout << a[12] << std::endl;
  return 0;
}
