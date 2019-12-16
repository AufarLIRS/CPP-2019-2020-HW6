#include <iostream>
#include "swap.h"
#include "MyUniquePtr.h"
#include "template.h"
#include "vector"

using namespace std;

int main()
{
  double a = 1.5;
  double b = 2.88;
  swap(a, b);
  std::cout << a << " " << b << endl;

  MyUniquePtr<double> p1(&a);
  MyUniquePtr<double> p2(&b);
  p2 = std::move(p1);
  std::cout << "end";
}
