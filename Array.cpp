#include "Array.h"
#include "exception"
#include <iostream>
template <typename T>
Array<T>::Array(size_t size)
{
  size_ = size;
  array_ = new T[size_];
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
  //std::exception e;
 // throw e;
}
template <typename T>
Array<T>::~Array()
{
  delete[] array_;
}
