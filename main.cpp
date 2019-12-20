#include <iostream>
#include "myuniquepointer.h"

using namespace std;

template <typename T>
void mySwap(T& first_param, T& second_param)
{
  auto temp = move(first_param);
  first_param = move(second_param);
  second_param = move(temp);
}

int main()
{
  std::string a = "Param A";
  std::string b = "We must sequire the existence of C++ and the future of our white and green QT creator";

  mySwap(a, b);
  cout << "Param a contains: " << a << endl;
  cout << "Param b contains: " << b << endl;
  cout << "" << endl;

  MyUniquePointer<std::string> pointerTest1(&a);
  MyUniquePointer<std::string> pointerTest2(&b);
  pointerTest1 = move(pointerTest2);

  return 0;
}
