#ifndef MYUNIQUEPTR_H
#define MYUNIQUEPTR_H

template <class T>
class MyUniquePtr
{
  T* ptr_;

public:
  explicit MyUniquePtr(T* ptr)
  {
    ptr_ = ptr;
  }
  MyUniquePtr(const MyUniquePtr&) = delete;
  MyUniquePtr& operator=(const MyUniquePtr&) = delete;
  MyUniquePtr(MyUniquePtr&& r)
  {
    ptr_ = r.ptr_;
    r.ptr_ = nullptr;
  }
  MyUniquePtr& operator=(MyUniquePtr&& r)
  {
    ptr_ = r.ptr_;
    r.ptr_ = nullptr;
    return *this;
  }
  ~MyUniquePtr()
  {
    delete ptr_;
  }
};

#endif  // MYUNIQUEPTR_H
