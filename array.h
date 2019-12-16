#ifndef ARRAY_H
#define ARRAY_H
#include <stddef.h>

template <class T>
class Array
{
  T* data_;
  size_t size_;

public:
  explicit Array(size_t size) : data_(new T[size]), size_(size)
  {
  }
  ~Array()
  {
    delete[] data_;
  }
  size_t size() const
  {
    return size_;
  }
  T operator[](size_t i) const
  {
    return data_[i];
  }
  T& operator[](size_t i)
  {
    return data_[i];
  }
};

#endif  // ARRAY_H
