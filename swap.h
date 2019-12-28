#ifndef SWAP_H
#define SWAP_H

template <class T>
void swap(T* a, T* b)
{
  T c = *a;
  *a = *b;
  *b = c;
}

#endif  // SWAP_H
