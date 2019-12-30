#include "MyUniquePtr.h"
template <typename T>
MyUniquePtr<T>::MyUniquePtr()
{
  pointer = nullptr;
}

template <typename T>
MyUniquePtr<T>::MyUniquePtr(T* pointer)
{
  this->pointer = pointer;
}

template<typename T>
MyUniquePtr<T>& MyUniquePtr<T>::operator=(MyUniquePtr&& a)
{
  *pointer = std::move(*a.getPonter());
  return *this;
}

