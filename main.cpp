#include <iostream>
#include "myuniqueptr.h"
using namespace std;

template <typename T>
void MySwap(T& a, T& b)
{
  auto temp = std::move(a);
  a = std::move(b);
  b = std::move(temp);
}

int main()
{
  cout << "1 task" << endl;
  auto a = 0;
  auto b = 1;
  MySwap(a, b);
  cout << a << endl;  // 1
  cout << b << endl;  // 0

  cout << "2 task" << endl;
  MyUniquePtr<int> ptra(&a);  // 1
  MyUniquePtr<int> ptrb(&b);  // 0
  ptra = std::move(ptrb);     // ptra = 0// ptrb=nullptr

  return 0;
}
