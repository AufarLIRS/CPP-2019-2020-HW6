#include <iostream>
#include <swap.h>
#include "Array.h"
using namespace std;

int main()
{
  Array<int> a(10);
  for (int i = 0; i < a.size(); i++)
  {
    a[i] = i;
  }
  cout << a[2] << endl;
  return 0;
}
