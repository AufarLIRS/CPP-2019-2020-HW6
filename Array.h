#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

template <typename T>
class Array
{
  size_t size_;
  T* array_;

public:
  Array(size_t size);
  size_t size() const;
  T& operator[](size_t index);
  T operator[](size_t index) const;
  ~Array();
};

#endif  // ARRAY_H
