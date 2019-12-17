#ifndef MYUNIQUEPTR_H
#define MYUNIQUEPTR_H

template <class T>
class MyUniquePtr
{
  T* myptr_;

public:
  MyUniquePtr(T* ptr)
  {
    myptr_ = ptr;
  }

  ~MyUniquePtr()
  {
    delete myptr_;
  }

  MyUniquePtr(const MyUniquePtr&) = delete;
  MyUniquePtr& operator=(const MyUniquePtr&) = delete;
  MyUniquePtr(MyUniquePtr&&) = default;
  MyUniquePtr& operator=(MyUniquePtr&&) = default;
};

#endif  // MYUNIQUEPTR_H
