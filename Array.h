#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include "exception"

template <typename T>
class Array
{
  size_t size_;
  T* array_;

public:
  Array(size_t size)
  {
    size_ = size;
    array_ = new T[size_];
  }

  size_t size() const
  {
    return size_;
  }

  T& operator[](size_t index)
  {
    if (index >= 0 && index < size_)
      return array_[index];
    std::exception e;
    throw e;
  }

  T operator[](size_t index) const
  {
    if (index >= 0 && index < size_)
      return array_[index];
    std::exception e;
    throw e;
  }

  ~Array()
  {
    delete[] array_;
  }
};

#endif  // ARRAY_H
