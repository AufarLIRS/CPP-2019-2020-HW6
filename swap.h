#ifndef SWAP_H
#define SWAP_H
#include <utility>
namespace non_std
{
template <typename T>
void swap(T& a, T& b)
{
  T c = std::move(a);
  a = std::move(b);
  b = std::move(c);
}
}  // namespace non_std
#endif  // SWAP_H
