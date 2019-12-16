#ifndef SWAP_H
#define SWAP_H
#include "utility"

template <typename T>
class Swap
{
public:
  static void swap(T& t1, T& t2)
  {
    auto tmp = std::move(t1);
    t1 = std::move(t2);
    t2 = std::move(tmp);
  }
};

#endif  // SWAP_H
