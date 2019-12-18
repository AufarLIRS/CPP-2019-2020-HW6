#include <iostream>
#include "myuniqueptr.h"

using namespace std;

template <typename T>
void swapFunc(T& first, T& second)
{
  // T temp = first;
  // first = second;
  // second = temp;

  T temp = std::move(first);
  first = std::move(second);
  second = std::move(temp);
}

int main()
{
  int a = 5;
  int b = 6;
  cout << "Task1: " << endl;
  cout << a << "  " << b << endl;
  swapFunc(a, b);
  cout << a << "  " << b << endl;

  double c = 5.7;
  double d = 6.351;
  cout << c << "  " << d << endl;
  swapFunc(c, d);
  cout << c << "  " << d << endl << endl;

  MyUniquePtr<int> ptr1(&a);
  MyUniquePtr<int> ptr2(&b);
  MyUniquePtr<double> ptr3(&d);
  ptr1 = std::move(ptr2);
  cout << "Task2: " << endl;
  cout << ptr1.getUniquePtr() << "  " << ptr2.getUniquePtr() << endl;  // ptr1 выодится, ptr2 - нет
}
