#include <swap.h>
#include <utility>
template <typename T>
void non_std::swap(T& a, T& b)
{
  T c = std::move(a);
  a = std::move(b);
  b = std::move(c);
}
