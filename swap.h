#ifndef SWAP_H
#define SWAP_H

template <typename T>

class Swap
{
public:
  static void swap(T& t1, T& t2)
  {
    auto tmp = t1;
    t1 = t2;
    t2 = tmp;
  }
};

#endif  // SWAP_H
