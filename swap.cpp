#include <swap.h>

template <typename T>
void non_std::swap(T& a, T& b)
{
  T c = a;
  a = b;
  b = c;
}
