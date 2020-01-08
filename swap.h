#ifndef SWAP_H
#define SWAP_H

namespace non_std
{
template <typename T>
void swap(T& a, T& b)
{
  T c = std::move(a);
  a = std::move(b);
  b = std::move(c);
}
}
#endif  // SWAP_H
