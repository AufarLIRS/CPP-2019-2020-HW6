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

  T getUniquePtr()
  {
    return *myptr_;
  }

  MyUniquePtr(const MyUniquePtr&) = delete;
  MyUniquePtr& operator=(const MyUniquePtr&) = delete;
  MyUniquePtr(MyUniquePtr&& other)
  {
    myptr_ = other.myptr_;
    other.myptr_ = nullptr;
  }
  MyUniquePtr& operator=(MyUniquePtr&& other)
  {
    myptr_ = other.myptr_;
    other.myptr_ = nullptr;
    return *this;
  }
};

#endif  // MYUNIQUEPTR_H
