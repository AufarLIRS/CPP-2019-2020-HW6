#include "Array.h"
template <typename T>
Array<T>::Array(size_t size)
{
  array_ = new T[size];
}

template <typename T>
size_t Array<T>::size() const
{
  return size_;
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
  if (index > -1 && index < size_)
    return array_[index];
  else
    return NULL;
}
